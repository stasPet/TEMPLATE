#ifndef DEFINE_REPLACE_FIRST_ELEMENT
#define DEFINE_REPLACE_FIRST_ELEMENT

#include "PopFront.h"
#include "PushFront.h"

template< typename Element, typename List >
using ReplaceFirstElement = typename PushFront< typename PopFront< List >::Type, Element >::Type;

#endif