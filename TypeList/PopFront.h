#ifndef DEFINE_POP_FRONT
#define DEFINE_POP_FRONT

#include "TypeList.h"

template< typename List >
struct PopFront;

template< typename Head, typename ... Tail >
struct PopFront< TypeList< Head, Tail ... > >
{
  using Type = TypeList< Tail ... >;
};

#endif