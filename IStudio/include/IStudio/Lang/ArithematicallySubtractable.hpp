#ifndef __ARITHEMATICALLYSUBTRACTABLE_H__
#define __ARITHEMATICALLYSUBTRACTABLE_H__
namespace IStudio::Lang
{
template <typename t> class ArithematicallySubtractable
{
public:
  using subtractableType = t;

  friend constexpr subtractableType
  operator- (const subtractableType &x, const subtractableType &y)
  {
    return subtractableType{ x.getData () - y.getData () };
  }
};
}

#endif // __ARITHEMATICALLYSUBTRACTABLE_H__