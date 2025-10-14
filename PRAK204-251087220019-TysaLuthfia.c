#include<stdio.h> 
int main(){
float ja, ti, vol, lu, kel;
printf("Masukkan Jari-jari	: ");
scanf("%f", &ja);
printf("Masukkan Tinggi	: ");
scanf("%f", &ti);
vol = 22 * ja * ja * ti /7;
lu = 2 * 22 * ja * (ja + ti) / 7; 
kel = 2 * 22 * ja / 7;
printf("Hasil Volume	:%.2f \n", vol);
printf("Hasil Luas	:%.2f \n", lu);
printf("Keliling	:%.2f \n", kel);
return 0;
}
