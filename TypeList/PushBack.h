#ifndef DEFINE_PUSH_BACK
#define DEFINE_PUSH_BACK

#include "TypeList.h"

template< typename Element, typename List >
struct PushBack;

template< typename ... Head, typename Tail >
struct PushBack< TypeList< Head ... >, Tail >
{
  using Type = TypeList< Head ... , Tail >;
};

#endif