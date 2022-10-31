#ifndef __ALLOCATOR_H__
#define __ALLOCATOR_H__

#include <IStudio/Lang/Integer.hpp>

namespace IStudio::Util{
    class Allocator{
        static constexpr Lang::Integer length = 10000;
        static constexpr const char space[10000];

        static constexpr auto getLength(){
            return length;
        }

        


    };
}

#endif // __ALLOCATOR_H__