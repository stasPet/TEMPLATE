#include <vector>
#include <string>

#include "Alexandrescu/Allocator.h"

int main()
{
  {
  std::vector< std::string, Loki::LokiAllocator< std::string > > vector;

  for ( unsigned i{}; i < 1000 * 1000 * 5; ++i )
    vector.push_back( "Hello World!" );
  }

 {
  std::vector< std::string, Loki::LokiAllocator< std::string > > vector;

  for ( unsigned i{}; i < 1000 * 1000 * 5; ++i )
    vector.push_back( "Hello World!" );
  }

  return 0;
}