#include<stdio.h>

int main()
{

    int sayi1,sayi2;

    printf("Lütfen 2 adet sayı giriniz:");
    scanf("%d%d",&sayi1,&sayi2);

    if(sayi1<=sayi2)
    {
        if(sayi1==sayi2)
            {
            printf("Sonuc: %d = %d ",sayi1,sayi2);
            }
        else{
            printf("Sonuc: %d < %d ",sayi1,sayi2);

            }
    }
    else
            {
            printf("Sonuc: %d > %d ",sayi1,sayi2);

            }







}
