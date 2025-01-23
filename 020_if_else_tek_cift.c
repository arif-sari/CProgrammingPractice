#include <stdio.h>
#include <stdlib.h>

int main()
{
   // kullanıcıdan 3 sayı alma ve if else kullanarak sayının tekmi çift mi olduğunu yazma
   int sayi;

      printf("Lütfen bir adet sayı giriniz: ");

   scanf("%d",&sayi);

   if(sayi%2==0)
   {
        printf("%d Sayimiz cifttir",sayi);

   }
   else
    {
        printf("%d Sayimiz tektir",sayi);
    }



    return 0;
}
