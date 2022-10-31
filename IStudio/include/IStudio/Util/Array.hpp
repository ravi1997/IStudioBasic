#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <IStudio/Lang/Integer.hpp>

namespace IStudio::Util{

    template<typename t,long long... x>
    class Array;

    template<typename t,long long j,long long ... x> requires (sizeof...(x) >=1)
    class Array<t,j,x...>{
        public:

            using ArrayType = t;
            using SizeType = Lang::Integer;
        private:
            Array<ArrayType,x...> data[j];
        public:
            constexpr Array() = default;
            constexpr Array(const Array& a){
                for(SizeType i = 0; i<SizeType{j};i++)
                    data[i] = a[i];
            }

            constexpr Array& operator=(const Array& a){
              for (SizeType i = 0; i < SizeType{ j }; i++)
                data[i] = a[i];
              return *this;
            }


            Array<ArrayType,x...> operator[](const SizeType a){
                return data[a.getData()];
            }

    };

    template <typename t, long long j> class Array<t,j>
    {
    public:
      using ArrayType = t;
      using SizeType = Lang::Integer;

    private:
      ArrayType data[j];
    public:
        constexpr Array() = default;
        constexpr Array(const Array& a){
          for (SizeType i = 0; i < SizeType{ j }; i++)
            data[i] = a[i];
        }
        constexpr Array &
        operator= (const Array &a)
        {
          for (SizeType i = 0; i < SizeType{ j }; i++)
            data[i] = a[i];
          return *this;
        }

        ArrayType operator[] (const SizeType a)
        {
          return data[a.getData ()];
        }
    };
}

#endif // __ARRAY_H__