#ifndef DEFINE_ELEMENT_BY_INDEX
#define DEFINE_ELEMENT_BY_INDEX

#include "PopFront.h"
#include "Front.h"

template< typename List, unsigned Index >
struct ElementByIndex :
  ElementByIndex< typename PopFront< List >::Type, Index - 1 > {};

template< typename List >
struct ElementByIndex< List, 0 > : Front< List >
{
  
};

#endif