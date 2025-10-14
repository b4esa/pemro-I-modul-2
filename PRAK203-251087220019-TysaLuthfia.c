#include<stdio.h> 
int main()
{
float aa, bb, ii, jj, xx, yy, has; 
printf("a : "); 
scanf("%f", &aa);
printf("b : ");
scanf("%f", &bb);
printf("i : ");
scanf("%f", &ii);
printf("j : ");
scanf("%f", &jj);
printf("x : ");
scanf("%f", &xx);
printf("y : ");
scanf("%f", &yy);
has = (aa-bb)*(ii/jj)-(xx+yy); 
printf("Hasilnya adalah \"%.3f\" ", has);
return 0;
}