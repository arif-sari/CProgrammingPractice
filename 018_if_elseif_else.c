#include <stdio.h>
#include <stdlib.h>

int main(){

int x = 55;
int y = 535;

    /*if(x>y){ // birinci duruma bakıyor X y den büyükmü

        printf("x y'den buyuktur");

    }
    else
    { // x in yden küçük ve eşit olma durumunda burası çalışır
        printf("x y den kucuktur yada esittir");
    }
    */

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
