#include "DefaultTamplate.h"

int main()
{
  BreadSlicer< Policy_3_is< DefaultPolicy_5 > > bs;
  bs.show();

  return 1;
}