#include <stdio.h>
int calc(int x1, int y1, int x2, int y2, int x3, int y3) {
return (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
}

int main(){
int x1,y1,x2,y2,x3,y3,x4,y4,det1,det2,det3,det4;
printf("Образуют ли точки выпуклый Четырехугольник? \n");
printf("x1,y1\n");
scanf("%d %d", &x1,&y1);
printf("x2,y2\n");
scanf("%d %d", &x2,&y2);
printf("x3,y3\n");
scanf("%d %d", &x3,&y3);
printf("x4,y4\n");
scanf("%d %d", &x4,&y4);
det1 = calc(x1,y1,x2,y2,x3,y3);
det2 = calc(x2,y2,x3,y3,x4,y4);
det3 = calc(x3,y3,x4,y4,x1,y1);
det4 = calc(x4,y4,x1,y1,x2,y2);
if((det1 > 0 && det2 > 0 && det3 > 0 && det4 > 0) || (det1 < 0 && det2 < 0 && det3 < 0 && det4 <
0)){
printf("Выпуклый");
}else{
printf("Не выпуклый");
}
}