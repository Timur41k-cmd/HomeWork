#include <stdio.h>

int main() {
    int x=2;
    do{
        if(x%2==0 && x%3==0){
            printf("%d \n",x);
        }
        x=x+1;
    }while(x<=120);
}