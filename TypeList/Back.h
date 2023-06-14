#ifndef DEFINE_BACK
#define DEFINE_BACK

#include "ElementByIndex.h"
#include "TypeListSize.h"

template< typename List >
struct Back : ElementByIndex< List, TypeListSize< List >::value - 1 >
{
  
};

#endif