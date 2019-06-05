#include <stdio.h>
int main()
{
  __asm__ __volatile__(

   "mov $88,%%eax \n\t"
   "mov $0,%%edx \n\t"
   "int $0x80 \n\t"
   ::);
   return 1;
}
