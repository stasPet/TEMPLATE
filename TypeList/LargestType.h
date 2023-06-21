#ifndef DEFINE_LARGEST_TYPE
#define DEFINE_LARGEST_TYPE

#include "TypeList.h"
#include "IfThenElse.h"
#include "Front.h"
#include "PopFront.h"

template< typename List >
class LargestType;

template< typename List >
class LargestType
{
 private:
  using First = typename Front< List >::Type;
  using Rest = typename LargestType< typename PopFront< List >::Type >::Type;

 public:
  using Type = typename IfThenElse< ( sizeof( First ) >= sizeof( Rest ) ), First, Rest >::Type;
};

template<>
class LargestType< TypeList<> >
{
 public:
  using Type = char;
};

#endif // !DEFINE_LARGEST_TYPE
