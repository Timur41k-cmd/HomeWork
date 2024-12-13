#include <stdio.h>
int n = 5;


int main() {
    double num;
    double sum;
    printf("Введите количество дробей:\n");
    scanf("%lf",&num);
    
    for(int x=0;x<num;x++){
        sum=sum+1/((double)x+1);
    }
    printf("Сумма дробей: %lf",sum);
}
    
