#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <IStudio/IStudioDeclaration.hpp>

namespace IStudio::Util
{

template <typename t>
class Vector
{
public:
    using Type = t;
    using SizeType = IStudio::Lang::Integer;
};

} // namespace IStudio::Util


#endif // __VECTOR_H__
