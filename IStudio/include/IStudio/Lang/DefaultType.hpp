#ifndef __DEFAULTTYPE_H__
#define __DEFAULTTYPE_H__

namespace IStudio::Lang
{
template <typename t>
class DefaultType
{
public:
    using InheritType = t;
    auto getData() const
    {
        return static_cast<const InheritType *>(this)->data;
    }
};
} // namespace IStudio::Lang

#endif // __DEFAULTTYPE_H__
