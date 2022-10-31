#ifndef __BOOLEAN_H__
#define __BOOLEAN_H__

#ifndef __ISTUDIODECLARATION_H__
#include <IStudio/IStudioDeclaration.hpp>
#endif


namespace IStudio::Lang
{

class Boolean : private DefaultType<Boolean>
{
public:
    using Type = bool;

private:
    Type data = false;

    Boolean(Type d) : data{d}
    {
    }

public:
    static Boolean TRUE;
    static Boolean FALSE;

    Boolean() = default;

    Boolean(const Boolean &b) : data{b.data}
    {
    }

    Boolean &operator=(const Boolean &b)
    {
        data = b.data;
        return *this;
    }


    Boolean &operator==(const Boolean &b) const
    {
        if (data == b.data)
            return TRUE;
        else
            return FALSE;
    }

    operator bool()
    {
        return data;
    }

    friend class DefaultType<Boolean>;
};


} // namespace IStudio::Lang


#endif // __BOOLEAN_H__
