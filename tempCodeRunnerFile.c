#include<stdio.h> 
int main(){
float r, ti, vol, lu, kel;
printf("Masukkan jari-jari : ");
scanf("%f", &r);
printf("Masukkan tinggi bejana : ");
scanf("%f", &ti);
vol = 22 * r * r * ti /7;
lu = 2 * 22 * r * (r + ti) / 7; 
kel = 2 * 22 * r / 7;
printf("Volume :%.2f \n", vol);
printf("Luas :%.2f \n", lu);
printf("Keliling :%.2f \n", kel);
return 0;
}