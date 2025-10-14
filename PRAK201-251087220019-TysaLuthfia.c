#include<stdio.h>
int main(){
char nama[25], NIM[25], kelas[25], TTL[25], alamat[25], hobby[25], nohp[25];
printf("Nama:", nama); gets(nama);
printf("NIM:", NIM); gets(NIM);
printf("Kelas Paralel:", kelas); gets(kelas);
printf("Tempat/Tanggal Lahir:", TTL); gets(TTL);
printf("Alamat:", alamat); gets(alamat);
printf("Hobby:", hobby); gets(hobby);
printf("No. HP:", nohp); gets(nohp); 
printf("\n");
printf("Nama: %s\n", nama);
printf("NIM: %s\n", NIM);
printf("Kelas Paralel: %s\n", kelas);
printf("Tempat/Tanggal Lahir: %s\n", TTL);
printf("Alamat: %s\n", alamat);
printf("Hobby: %s\n", hobby);
printf("No. HP: %s\n", nohp);

return 0;
}