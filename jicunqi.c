#include <stdio.h>
int  main(void)
{
  int a,b,c;
  a=2;
  b=3;
  c=(int)b;
  __asm__(
   "add %1,%1\n\t"
   "add %2,%1\n\t"
   "add %%eax,%1\n\t"
   "mov %1,%0\n\t"
   "mov $0xff,%%eax \n\t"
   "mov $0xfe,%%ebx \n\t"
   "mov $0xfd,%%ecx \n\t"
   "mov $0xfc,%%edx \n\t"
   :"=r"(a):"r"(a),"b"(b)
  );
  (*(&printf))("%d\n",a);
   
  return 1;
}
