#ifndef __INTEGER_H__
#define __INTEGER_H__


#ifndef __ISTUDIODECLARATION_H__
#include <IStudio/IStudioDeclaration.hpp>
#endif

namespace IStudio::Lang
{
class Integer : public DefaultType<Integer>, public Comparable<Integer>
{
public:
    using Type = int;

private:
    Type data = 0;


public:
    Integer() = default;
    Integer(Type d) : data{d}
    {
    }

    Integer(const Integer &d) =default;


    Integer &operator=(const Integer &d)=default;

    ~Integer() = default;

    Integer(Integer &&) = default;
    Integer &operator=(Integer &&) = default;

    Integer& operator++()
    {
        // actual increment takes place here
        data++;
        return *this; // return new value by reference
    }
 
    // postfix increment
    Integer operator++(int)
    {
        Integer old = *this; // copy old value
        operator++();  // prefix increment
        return old;    // return old value
    }
 
    // prefix decrement
    Integer& operator--()
    {
        // actual decrement takes place here
        data--;
        return *this; // return new value by reference
    }
 
    // postfix decrement
    Integer operator--(int)
    {
        Integer old = *this; // copy old value
        operator--();  // prefix decrement
        return old;    // return old value
    }


    friend class Double;
    friend class string;

    friend class DefaultType<Integer>;
    friend class EquiComparable<Integer>;
    friend class Equitable<Integer>;
    friend class NonEquitable<Integer>;
    friend class LessThan<Integer>;
    friend class LessThanEquitable<Integer>;
    friend class GreaterThan<Integer>;
    friend class GreaterThanEquitable<Integer>;
    friend class Comparable<Integer>;
};
} // namespace IStudio::Lang
#endif // __INTEGER_H__
