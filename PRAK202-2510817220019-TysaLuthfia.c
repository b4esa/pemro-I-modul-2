#include<stdio.h>
int main(){
float pertama, kedua, hasil; 
printf("Masukkan nilai pertama : "); 
scanf("%f", &pertama); 
printf("masukkan nilai kedua : "); 
scanf("%f", &kedua);
hasil = pertama + kedua;
printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\" ", pertama ,kedua ,hasil);
return 0;
}