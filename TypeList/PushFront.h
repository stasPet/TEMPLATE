#ifndef DEFINE_PUSH_FRONT
#define DEFINE_PUSH_FRONT

#include "TypeList.h"

template< typename Head, typename Tail >
struct PushFront;

template< typename ... Head, typename Tail >
struct PushFront< TypeList< Head ... >, Tail >
{
  using Type = TypeList< Tail, Head ... >;
};

#endif