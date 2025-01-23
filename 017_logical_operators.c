#include<stdio.h>

int main(){

/* Logical operators

&& ve

|| yada

! değil


*/


int x=20;

int y=25;

printf("%d \n",x>10 && x<30);  //x 10 dan büyük ve 30dan küçük

printf("%d \n",x>10 || x<20); // x 10 dan büyük yada 20den küçük

printf("%d\n", x>30 || x<20); // x 30dan büyük yada x 20den küçük

printf("%d\n", !(x>10|| x<20) ); // doğru olan şeyin olunsuzunu önüne ! koyarak sağlarız



return 0;
}
