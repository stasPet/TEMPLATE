#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>
#include <list>

// #include "Alexandrescu/Allocator.h"
#include "Alexandrescu/SmallObj.h"

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

//void foo()
//{
//  {
//    std::vector< TestStruct, Loki::LokiAllocator< TestStruct > > vector;
//    std::list< TestStruct, Loki::LokiAllocator< TestStruct > > list;
//
//    for ( unsigned i{}; i < 10; ++i )
//    {
//      // vector.emplace_back( i );
//      list.emplace_back( i );
//    }
//  }
//}

struct MyAllocator : public Loki::SmallObjAllocator
{
  MyAllocator( std::size_t pageSize, std::size_t maxObjectSize,
    std::size_t objectAlignSize ) :
      Loki::SmallObjAllocator{ pageSize, maxObjectSize, objectAlignSize } {}
};

int main()
{
  MyAllocator smallObjAllocator{ 1, 1, 1 };

  smallObjAllocator.Allocate( 1, true );

  //std::vector< TestStruct, Loki::LokiAllocator< TestStruct > > vector;
  //vector.emplace_back( 0 );

  //while ( true )
  //{
  //  std::thread{ foo }.detach();
  //}

  return 0;
}