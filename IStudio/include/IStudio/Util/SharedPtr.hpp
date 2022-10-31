#ifndef __SHAREDPTR_H__
#define __SHAREDPTR_H__

#include <IStudio/IStudioDeclaration.hpp>
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
        IStudio::Lang::Integer count = 0;
    };

    Data *data = nullptr;

public:
    SharedPtr() = default;
    SharedPtr(const SharedPtr &s) : data{s.data}
    {
        data->count++;
    }

    SharedPtr &operator=(const SharedPtr &s)
    {
        data = s.data;
        data->count++;
        return *this;
    }
};

} // namespace IStudio::Util

#endif // __SHAREDPTR_H__
