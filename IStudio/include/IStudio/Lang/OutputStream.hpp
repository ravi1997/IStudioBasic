#ifndef __OUTPUTSTREAM_H__
#define __OUTPUTSTREAM_H__

#include <IStudio/types.hpp>

namespace IStudio::Lang
{
template <typename t> class OutputStream
{
public:
  using operatingType = t;

  friend std::ostream &
  operator<< (std::ostream &x, const operatingType &y)
  {
    return x << y.getData ();
  }
};
}

#endif // __OUTPUTSTREAM_H__
