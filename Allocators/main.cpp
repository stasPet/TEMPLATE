#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>
#include <list>

#include "Alexandrescu/Allocator.h"

using namespace std::chrono_literals;

struct TestStruct
{
  unsigned value;

  TestStruct( unsigned i ) : value{ i }
  {
    std::cout << "TestStruct()" << value << '\n';
    std::this_thread::sleep_for( 3s );
  }

  ~TestStruct()
  {
    std::cout << "~TestStruct()" << value << '\n';
    std::this_thread::sleep_for( 3s );
  }
};

void foo()
{
  {
    std::vector< TestStruct, Loki::LokiAllocator< TestStruct > > vector;
    std::list< TestStruct, Loki::LokiAllocator< TestStruct > > list;

    for ( unsigned i{}; i < 10; ++i )
    {
      // vector.emplace_back( i );
      list.emplace_back( i );
    }
  }
}

int main()
{
  while ( true )
  {
    std::thread{ foo }.detach();
  }

  return 0;
}