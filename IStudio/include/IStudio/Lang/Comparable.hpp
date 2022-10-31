#ifndef __COMPARABLE_H__
#define __COMPARABLE_H__

#ifndef __ISTUDIODECLARATION_H__
#include <IStudio/IStudioDeclaration.hpp>
#endif

namespace IStudio::Lang
{
template <typename t>
class Comparable : public EquiComparable<t>,
                   public LessThan<t>,
                   public LessThanEquitable<t>,
                   public GreaterThan<t>,
                   public GreaterThanEquitable<t>
{
public:
    using Type = t;
    friend class Equitable<Type>;
    friend class NonEquitable<Type>;
    friend class LessThan<Type>;
    friend class LessThanEquitable<Type>;
    friend class GreaterThan<Type>;
    friend class GreaterThanEquitable<Type>;
};
} // namespace IStudio::Lang

#endif // __COMPARABLE_H__
