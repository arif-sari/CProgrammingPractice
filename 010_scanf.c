#include<stdio.h>
#define PI 3.14
int main(){

    int yas;
    char isim;
    float boy;

    printf("Lutfen adınızı baş harfini giriniz : \n");

    scanf(" %c",&isim);

    printf("Lutfen yasınızı giriniz :\n");

    scanf(" %d",&yas);

    printf("Lutfen boyunuzu giriniz :\n");

    scanf(" %f",&boy);



    printf("Adinizin basharfi %c %d yasindasiniz ve %.2f boyundasiniz\n",isim,yas,boy);
    printf("Sevdiğiniz sayi:  %f\n",PI);




    return 0;



}
