#include "ReplaceFirstElement.h"

using MyList = TypeList< bool, char, short, int, double >;

int main()
{
  ReplaceFirstElement< int, MyList > t;
  return 0;
}