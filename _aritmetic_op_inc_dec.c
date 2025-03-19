#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=10;
   int y;

   /*
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
   */

   y=x++;
   printf("y=x++ \n value equal: %d\n y value equal: %d\n\n",x,y);

   y=++x;
   printf("y=++x \n value equal: %d\n y value equal: %d\n\n",x,y);

   y=x--;
   printf("y=x-- \n value equal: %d\n y value equal: %d\n\n",x,y);

   y=--x;
   printf("y=--x \n value equal: %d\n y value equal: %d\n\n",x,y);

}
