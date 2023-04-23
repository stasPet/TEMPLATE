#ifndef DEFINE_TYPE_LIST
#define DEFINE_TYPE_LIST

template< typename ... Types >
struct TypeList
{
  using Type = Types ... ;
};

#endif