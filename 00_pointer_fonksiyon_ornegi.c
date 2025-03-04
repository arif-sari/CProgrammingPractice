#include <stdio.h>
#include <stdlib.h>
void yerDegistir(int *ilkDeger, int *sonDeger ){
    int temp= *ilkDeger;
    *ilkDeger=*sonDeger;
    *sonDeger=temp;

}
int main()
{
    printf("POİNTER FONKSİYON ORNEGİ\n\n");

    int x =15;

    int y =32;


    printf("X değişkeninin değeri: %d \n",x);
    printf("y değişkeninin değeri: %d \n \n",y);


 yerDegistir(&x,&y);

    printf("X değişkeninin değeri: %d \n",x);
    printf("y değişkeninin değeri: %d \n",y);
    return 0;
}
