#ifndef __ITERATOR_H__
#define __ITERATOR_H__

namespace IStudio::Util
{
template <typename t, template <typename t1> class C>
class Iterator<C<t>>
{
    using ContainerType = C<t>;
};
} // namespace IStudio::Util


#endif // __ITERATOR_H__
