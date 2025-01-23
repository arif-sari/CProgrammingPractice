#include <stdio.h>
#include <stdlib.h>

int main()
{
   // kullanıcıdan 3 adet sayı alıp en büyük sayıyı if kullanarak yazınız
   // daha sonra if else yapısına göre bulun

   int x,y,z;

    printf("X icin bir sayi giriniz:");
    scanf("%d",&x);
    printf("Y icin bir sayi giriniz:");
    scanf("%d",&y);
    printf("Z icin bir sayi giriniz:");
    scanf("%d",&z);


 // bu şekilde çoklu if yapısında ilk if çalışınca diger şartlarıda kontrol eder
   /*if(x>y && x>z)
    {
        printf(" %d sayisi en buyuktur",x);
    }

   if(y>x && y>z)
    {
        printf(" %d sayisi en buyuktur",y);
    }
   if(z>x && z>y)
    {
        printf(" %d sayisi en buyuktur",z);
    }
   if(x==y && x==z)
    {
        printf("Hepsi birbirine esittir");
    }
*/

    if(x>y && x>z)
    {
        printf(" %d sayisi en buyuktur",x);
    }

   else if(y>x && y>z)
    {
        printf(" %d sayisi en buyuktur",y);
    }
   else if(z>x && z>y)
    {
        printf(" %d sayisi en buyuktur",z);
    }
   else (x==y && x==z)
    {
        printf("Hepsi birbirine esittir");
    }



    return 0;
}
