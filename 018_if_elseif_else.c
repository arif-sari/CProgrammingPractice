#include <stdio.h>
#include <stdlib.h>

int main(){

int x ;
int y ;

    /*if(x>y)
    { // birinci koşula bakıyor x y den büyük mü

        printf("x y'den buyuktur");

    }
    else if (x==y)  // else if istenildiği kadar kullanılabilir
    { // ikinci koşula bakıyor x y ye eşitmi
        printf("x y'ye esittit");
    else
    { // koşul 3
        printf("x y den kucuktur yada esittir");
    }
    */

    printf("X sayısını giriniz: ");
    scanf("%d",&x);
    printf("Y sayısını giriniz: ");
    scanf("%d",&y);
    if(x>y)
    {
        printf("x y den büyük");

    }
    else if(x==y)
    {
        printf("x y ye esittir");

    }
    else
    {
        printf("x y den kucuktur");
    }



    return 0;
}
