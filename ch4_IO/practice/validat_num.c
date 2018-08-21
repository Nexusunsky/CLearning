#include <stdio.h>
#include <float.h>
int main(void)
{
  double d = 1.0 /3.0;
  float f = 1.0 /3.0;
  printf("6 digits：double: %.6e, float: %.6f \n", d, f);
  printf("12 digits：double: %.12e, float: %.12f \n", d, f);
  printf("16 digits：double: %.16e, float: %.16f \n", d, f);

  printf("FLT_DIG: %d \n", FLT_DIG);
  printf("DBL_DIG: %d \n", DBL_DIG);

  return 0;
}