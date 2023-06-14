#ifndef DEFINE_TYPE_LIST_SIZE
#define DEFINE_TYPE_LIST_SIZE

#include "TypeList.h"

template< typename List >
struct TypeListSize;

template< typename ... List >
struct TypeListSize< TypeList< List ... > >
{
  static constexpr unsigned value{ sizeof ... ( List ) };
};

#endif // !DEFINE_TYPE_LIST_SIZE
