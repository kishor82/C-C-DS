#include <stdio.h>
int main()
{
  // int a;
  // int *p;
  // p = &a;

  int a = 10;
  int *p = &a;

  // printf("%p \n", p);
  // printf("Garbade value : %d \n", *p);
  // printf("%p \n", &a); // &a = address of a

  *p = 12; // dereferencing
  // printf("a = %d\n", a);
  int b = 20;

  *p = b;

  int c = 30;

  *p = c;
  // printf("a after assinging (*p = b)  : %d\n", a);
  // printf("Address after assinging (*p = b) %p \n", p);

  // Pointer arithmetics
  printf("%p \n", p); // p is 2002
  printf("Value at adress p is %d\n", *p);
  printf("Size of integer is  %ld bytes \n", sizeof(int));
  printf("%p \n", p + 1); // p+1 is ? : depends on data type
  printf("Address of b %p\n", &b);
  printf("Value at adress p+1 is %d\n", *(p + 1)); // 20
  printf("Value at adress p+2 is %d\n", *(p + 2)); // 30
  printf("Value at adress p+3 is %d\n", *(p + 3)); // Garbage value

  // CONCLUSION
}