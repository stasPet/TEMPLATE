#include "TupleGet.h"

int main()
{
  Tuple< char, int, double > t{ ' ', 1, 1.0 };
  auto tResult{ get< 1 >( t ) };
}