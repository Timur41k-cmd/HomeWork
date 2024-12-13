#include <stdio.h>
int main()
{
const float var = 0.1;
float a,b,min,max,temp;
printf("Нахождение наибольшего и наименьшего значений в функции: y=3x^2+x-4, на интервале [a,b]\n");
printf("Введите точку a:\n");
scanf("%f",&a);
printf("Введите точку b:\n");
scanf("%f",&b);
min = temp = (3*(a*a)+a-4);
max = temp = (3*(b*b)+b-4);
for(float x = a;x < b+0.1;x = x+var){
temp = (3*(x*x)+x-4);
if(temp < min){
min = temp;
}
if(temp > max){
max = temp;
}
}
printf("Минимальное значение: %f\nМаксимальное значение: %f",min,max);
}