#include <stdio.h>

int main(){

    printf("Pointer örneği: \n\n");

    int x= 77;

    printf("x değişkeninin değeri: %d \n ", x);
    printf("x değişkeninin adresi: %d \n ", &x);

    // x değişkeninina adresini ptrX e gönderdik
    int *ptrX =&x;

    printf("ptrX değişkeninin gösterdiği adresin değeri:  %d \n ", *ptrX);
    printf("ptrX değişkeninin adresi %d \n ", &ptrX);
    printf("ptrX değişkeninin değeri %d \n ", ptrX);

    ptrX=52;
    printf("ptrX değişkeninin adresi %d \n ", &ptrX);  //ptrx değeri değişti fakat adres aynı x değeri artık 52
    printf("ptrX değişkeninin değeri %d \n ", ptrX);


    return 0;


}
