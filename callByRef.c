#include <stdio.h>
void Increment(int x)
{
  x = x + 1;
  printf("Address of variable a in increment = %p \n", &x);
}

void Decrement(int *p)
{
  *p = (*p) - 1;
}

int main()
{
  // Pointer as function arguments - Call by reference
  int a;
  a = 10;
  Increment(a);  // a -> x : Call by value
  Decrement(&a); // Call by reference
  printf("Address of variable a in main = %p \n", &a);
  printf("a = %d", a);
}

// Applicatoins memory
// Heap -> stack -> static/Global -> Code(Text)