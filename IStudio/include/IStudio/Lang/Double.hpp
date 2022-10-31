#ifndef __DOUBLE_H__
#define __DOUBLE_H__

#ifndef __ISTUDIODECLARATION_H__
#include <IStudio/IStudioDeclaration.hpp>
#endif

namespace IStudio::Lang
{

class Double : public DefaultType<Double>, public Comparable<Double>
{
public:
    using Type = double;

private:
    Type data = 0;


public:
    Double() = default;
    Double(Type d) : data{d}
    {
    }

    Double(const Double &d) : data{d.data}
    {
    }


    Double &operator=(const Double &d)
    {
        data = d.data;
        return *this;
    }


    friend class Integer;
    friend class string;

    friend class DefaultType<Double>;
    friend class EquiComparable<Double>;
    friend class Equitable<Double>;
    friend class NonEquitable<Double>;
    friend class LessThan<Double>;
    friend class LessThanEquitable<Double>;
    friend class GreaterThan<Double>;
    friend class GreaterThanEquitable<Double>;
    friend class Comparable<Double>;
};

} // namespace IStudio::Lang

#endif // __DOUBLE_H__
