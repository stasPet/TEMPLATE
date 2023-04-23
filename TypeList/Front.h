#ifndef DEFINE_FRONT
#define DEFINE_FRONT

#include "TypeList.h"

template< typename List >
struct Front;

template< typename Head, typename ... Tail >
struct Front< TypeList< Head, Tail ... > >
{
  using Type = TypeList< Head >;
};

#endif