#include <stdio.h>
#include <string.h>
void card_power(int card_num){
    switch(card_num){
        case 11:
        printf("Валет");
        break;
    case 12:
        printf("Дама");
        break;
    case 13:
        printf("Король");
        break;
    case 14:
        printf("Туз");
        break;
    }
}

int main()
{
    int x;
    printf("Введите порядковый номер карты:\n");
    scanf("%d",&x);
    if(x > 10){
    card_power(x);
    }else{
    printf("%d",x);
    }
}