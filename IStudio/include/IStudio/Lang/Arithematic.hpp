#ifndef __ARITHEMATIC_H__
#define __ARITHEMATIC_H__

#include <IStudio/Lang/ArithematicallySubtractable.hpp>
#include <IStudio/Lang/ArithematicallyAddable.hpp>

namespace IStudio::Lang{

    template<typename t>
    class Arithematic : public ArithematicallyAddable<t>, public ArithematicallySubtractable<t>{
        using ArithematicType = t;
    };

}

#endif // __ARITHEMATIC_H__