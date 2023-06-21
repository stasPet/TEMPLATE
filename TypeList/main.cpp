#include "LargestType.h"

using MyList = TypeList< bool, char, short, char[ 256 ], int, double >;

int main()
{
  LargestType< MyList >::Type t;
  return 0;
}