#ifndef __ARITHEMATICALLYADDABLE_H__
#define __ARITHEMATICALLYADDABLE_H__

namespace IStudio::Lang{
    template<typename t>
    class ArithematicallyAddable{
        public:
            using addableType = t;

            friend constexpr addableType
            operator+ (const addableType &x, const addableType &y) 
            {
              return addableType{x.getData()+y.getData()};
            }
    };
}


#endif // __ARITHEMATICALLYADDABLE_H__