#include <stdio.h>
int main()
{
  // Pointer types, void poniter , pointer arithmetic

  // int*  --> int - 4 bytes
  // char* --> char - 1 byte
  // float* --> float - 4 bytes

  // why strong types?
  // why not some generic type ?

  // Dereference - Access/Mofify value
  int a = 10253;
  int *p = &a;
  printf("Size of integer is %ld Bytes\n", sizeof(int));
  printf("Address = %p, value = %d\n", p, *p);
  printf("Address = %p, value = %d\n", p + 1, *(p + 1));

  char *p0;
  p0 = (char *)p; // typecasting

  printf("Size of char is %ld Bytes\n", sizeof(char));
  printf("Address = %p, value = %d \n", p0, *p0);
  printf("Address = %p, value = %d\n", p0 + 1, *(p0 + 1));

  // 00000000 00000000 00101000 00001101

  // Void pointer -Genric pointer

  void *pv;
  pv = p; // No need to typecast for void pointer
  // We can not dereference void pointer
  // printf("Value of pv %d", *pv); // will throw error
  printf("Address of pv = %p \n", pv); // same as address of p

  // arithmetic on a void* is illegal in both C and C++.
  // The C standard does not allow void pointer arithmetic. However, GNU C is allowed by considering the size of void is 1.
}
