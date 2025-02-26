#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sayi1,toplam=0;

    printf("For örneği için girdiğimiz sayıyaya kadar toplamını alacağız \n");


    printf("Başlangıc sayisi\n");
    scanf("%d",&sayi1);

    for( i=1 ;i<=sayi1;i++)
    {
       toplam += i;
    }

    printf("Toplam:%d",toplam);
    return 0;

}
