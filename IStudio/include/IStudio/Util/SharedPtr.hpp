#ifndef __SHAREDPTR_H__
#define __SHAREDPTR_H__


#ifndef __ISTUDIODECLARATION_H__
#include <IStudio/IStudioDeclaration.hpp>
#endif


namespace IStudio::Util
{

template <typename t>
class SharedPtr
{
public:
    using Type = t;
    using Pointer = Type *;

private:
    struct Data
    {
        Pointer ptr = nullptr;
        IStudio::Lang::Integer count = 1;
    };

    Data *data = nullptr;

public:
    SharedPtr() = default;
    SharedPtr(const SharedPtr &s) : data{s.data}
    {
        data->count++;
    }

    SharedPtr(SharedPtr&& s):
        data{s.data}
        {
            s.data = nullptr;
        }

    SharedPtr& operator=(SharedPtr&& s){
        data = s.data;
        s.data = nullptr;
        return *this;
    }

    SharedPtr &operator=(const SharedPtr &s)
    {
        data = s.data;
        data->count++;
        return *this;
    }


    ~SharedPtr(){
        if(data != nullptr){
            data -> count--;
            if(data->count == 0){
                delete data;
                data = nullptr;
            }
        }
    }

    template<typename ...Args>
    friend SharedPtr makeShared(Args...args){
        Pointer pData = new Type(args...);
        SharedPtr s;
        s.data = new Data();
        s.data->ptr = pData;
        pData = nullptr;
        return s;
    }


};

} // namespace IStudio::Util

#endif // __SHAREDPTR_H__
