#include <stdio.h>
 
int main()
{
   // memory = an array of bytes within RAM (street)
   // memory block = a single unit (byte) within memory (house), used to hold some value (person)
   // memory address = the address of where a memory block is located (house address)

   char a;
   char b;

   printf("%d bytes\n", sizeof(a));
   printf("%d bytes\n", sizeof(b));

   printf("%p\n", &a);
   printf("%p\n", &b);

   return 0;
}