#include <stdio.h>
int main()
{
  int x = 5;
  int *p = &x;
  *p = 6; // dereferancing
  int **q = &p;
  int ***r = &q;
  printf("1-%d \n", *p);   // 6
  printf("2-%ls \n", *q);  // value of p
  printf("3-%d \n", **q);  //  value of x
  printf("4-%ls \n", **r); // value in p
  printf("5-%d \n", ***r); // value in x
  ***r = 10;
  printf("x = %d\n", x);
  **q = *p + 2;
  printf("x = %d\n", x);
}