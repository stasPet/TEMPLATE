#ifndef DEFINE_TUPLE_GET
#define DEFINE_TUPLE_GET

#include "Tuple.h"

template< unsigned N >
struct TupleGet
{
  template< typename Head, typename ... Tail >
  static auto apply( Tuple< Head, Tail ... > const & tuple )
  {
    return TupleGet< N - 1 >::apply( tuple.getTail() );
  }
};

template<>
struct TupleGet< 0 >
{
  template< typename Head, typename ... Tail >
  static auto apply( Tuple< Head, Tail ... > const & tuple )
  {
    return tuple.getHead();
  }
};

template< unsigned N, typename ... Types >
auto get( Tuple< Types ... > const & tuple )
{
  return TupleGet< N >::apply( tuple );
}

#endif