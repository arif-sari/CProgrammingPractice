#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=10;
   int y;

   x=10;
   x++;
   printf("x++ value equal : %d\n",x);

   x=10;
   ++x;
   printf("+xx value equal : %d\n",x);

   x=10;
   x--;
   printf("x-- value equal : %d\n",x);

   x=10;
   --x;
   printf("--x value equal : %d\n",x);
}
