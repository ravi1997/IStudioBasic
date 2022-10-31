#ifndef __GREATERTHAN_H__
#define __GREATERTHAN_H__


#ifndef __ISTUDIODECLARATION_H__
#include <IStudio/IStudioDeclaration.hpp>
#endif

#ifndef __BOOLEAN_H__
#include <IStudio/Lang/Boolean.hpp>
#endif

namespace IStudio::Lang
{
template <typename t>
class GreaterThan
{
public:
    using Type = t;

    friend Boolean &operator>(const Type &left, const Type &right)
    {
        if (left.getData() > right.getData())
            return Boolean::TRUE;
        else
            return Boolean::FALSE;
    }
};

} // namespace IStudio::Lang

#endif // __GREATERTHAN_H__
