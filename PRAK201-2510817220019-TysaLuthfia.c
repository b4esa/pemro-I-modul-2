#include<stdio.h>
int main(){
char nama[25], NIM[25], kelas[25], TTL[25], alamat[25], hobby[25], nohp[25];
printf("Nama\t\t\t:", nama); gets(nama);
printf("NIM\t\t\t:", NIM); gets(NIM);
printf("Kelas Paralel\t\t:", kelas); gets(kelas);
printf("Tempat/Tanggal Lahir\t:", TTL); gets(TTL);
printf("Alamat\t\t\t:", alamat); gets(alamat);
printf("Hobby\t\t\t:", hobby); gets(hobby);
printf("No. HP\t\t\t:", nohp); gets(nohp); 
printf("\n");
printf("Nama\t\t\t: %s\n", nama);
printf("NIM\t\t\t: %s\n", NIM);
printf("Kelas Paralel\t\t: %s\n", kelas);
printf("Tempat/Tanggal Lahir\t: %s\n", TTL);
printf("Alamat\t\t\t: %s\n", alamat);
printf("Hobby\t\t\t: %s\n", hobby);
printf("No. HP\t\t\t: %s\n", nohp);

return 0;
}