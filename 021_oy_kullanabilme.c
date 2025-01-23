#include<stdio.h>

int main(){

int yas;

printf("Lutfen yaşınızı giriniz :");
scanf("%d",&yas);

if(yas>=18){
    printf("Yaşınız %d oy kullanabilirsiniz",yas);

}
else{
    printf("Yasınız %d oy kullanamazsın ",yas);
}



}
