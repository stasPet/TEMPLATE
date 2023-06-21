#include "IfThenElse.h"

// using MyList = TypeList< bool, char, short, int, double >;

int main()
{
  IfThenElse< false, int, double >::Type t;
  return 0;
}