#ifndef __EQUICOMPARABLE_H__
#define __EQUICOMPARABLE_H__

#ifndef __ISTUDIODECLARATION_H__
#include <IStudio/IStudioDeclaration.hpp>
#endif

namespace IStudio::Lang
{


template <typename t>
class EquiComparable : public Equitable<t>, public NonEquitable<t>
{
public:
    using Type = t;
    friend class Equitable<Type>;
    friend class NonEquitable<Type>;
};
} // namespace IStudio::Lang

#endif // __EQUICOMPARABLE_H__
