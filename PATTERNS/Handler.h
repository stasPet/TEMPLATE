#ifndef DEFINE_HANDLER
#define DEFINE_HANDLER

#include "../TypeList/Front.h"
#include "../TypeList/PopFront.h"

template< typename HandlersList >
struct Handler
{
  typename Front< HandlersList >::Type handler;
  Handler< typename PopFront< HandlersList >::Type > next;

  void handle()
  {
    if ( handler.handle() )
      next.handle();
  }
};

template<>
struct Handler< TypeList<> >
{
  void handle() {}
};

#endif // !DEFINE_HANDLER
