#include "Handler.h"

struct Handler_1
{
  void handle()
  {
    
  }
};

struct Handler_2
{
  void handle()
  {
    
  }
};

struct Handler_3
{
  void handle()
  {
    
  }
};

using Handlers = TypeList< Handler_1, Handler_2, Handler_3 >;

int main()
{
  Handler< Handlers > handlers;
  handlers.handle();

  return 0;
}