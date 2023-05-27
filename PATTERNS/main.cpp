#include "Handler.h"

struct Handler_1
{
  bool handle()
  {
    return true;
  }
};

struct Handler_2
{
  bool handle()
  {
    return true;
  }
};

struct Handler_3
{
  bool handle()
  {
    return true;
  }
};

using Handlers = TypeList< Handler_1, Handler_2, Handler_3 >;

int main()
{
  auto handle = []( auto this_ )
  {
    this_->handler.handle();
    this_->next.handle();
  };
  Handler< Handlers > handlers;
  handlers.handle();

  return 0;
}