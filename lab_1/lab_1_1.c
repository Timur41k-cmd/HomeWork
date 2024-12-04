#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,res,s;
printf("Вычисление отношения высот, проведенных к большим и меньшим сторонам \n");
printf("Введите длину сторон a,b,c:\n");
scanf("%f %f %f",&a,&b,&c);
float arr[3] = {a,b,c};
float max = arr[0];
float min = arr[0];
for(int x = 0; x < 3;x++){
if(max < arr[x]){
max = arr[x];
}
}
for(int x = 0; x < 3;x++){
if(min > arr[x]){
min = arr[x];
}
}
s = (a+b+c)/2;
s = sqrt(s*(s-a)*(s-b)*(s-c));
res = ((2*s)/max)/((2*s)/min);
printf("Отношение к большей и меньшей сторонам равно: ");
printf("%f",res);
}