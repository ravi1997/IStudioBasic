#ifndef __LANGDECLARATION_H__
#define __LANGDECLARATION_H__

#include <IStudio/Types.hpp>

#include <IStudio/Lang/DefaultType.hpp>

#ifndef __EQUITABLE_H__
#include <IStudio/Lang/Equitable.hpp>
#endif

#ifndef __NON_EQUITABLE_H__
#include <IStudio/Lang/NonEquitable.hpp>
#endif

#ifndef __EQUICOMPARABLE_H__
#include <IStudio/Lang/EquiComparable.hpp>
#endif

#ifndef __LESSTHAN_H__
#include <IStudio/Lang/LessThan.hpp>
#endif

#ifndef __LESSTHANEQUITABLE_H__
#include <IStudio/Lang/LessThanEquitable.hpp>
#endif

#ifndef __GREATERTHAN_H__
#include <IStudio/Lang/GreaterThan.hpp>
#endif

#ifndef __GREATERTHANEQUITABLE_H__
#include <IStudio/Lang/GreaterThanEquitable.hpp>
#endif


#ifndef __COMPARABLE_H__
#include <IStudio/Lang/Comparable.hpp>
#endif

namespace IStudio
{

namespace Lang
{
class Boolean;
class Double;
class Integer;
class Character;
class String;

} // namespace Lang

template <typename t>
concept isDefaultType = std::is_base_of_v<IStudio::Lang::DefaultType<t>, t>;


} // namespace IStudio


#endif // __LANGDECLARATION_H__
