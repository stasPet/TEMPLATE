#include <iostream>
#include <vector>
#include <string>
#include <thread>

#include "Alexandrescu/Allocator.h"

void foo()
{
  {
    std::vector< std::string, Loki::LokiAllocator< std::string > > vector;

    for ( unsigned i{}; i < 1000 * 1000 * 5; ++i )
      vector.push_back( "Hello World!" );
  }
}

int main()
{
  std::thread t1{ foo };
  std::thread t2{ foo };

  t1.detach();
  t2.detach();

  while ( true );

  return 0;
}