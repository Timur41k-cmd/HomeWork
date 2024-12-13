#include <stdio.h>


struct chairs{

    char countryMaker[20];
    float size;
    char material[20];
    int price[3];


};

void sort(int price[3]){
    int temp;
    for(int x=3-1;x>0;x--){
        for(int y=0;y<x;y++){
            if(price[y]>price[y+1]){ // 2 > 11 / 11 > 10 = 2 10 11 
                temp = price[y];
                price[y] = price[y+1];
                price[y+1] = temp;
            }
        }
    }
    for(int y=0;y<3;y++){
        printf("%d ",price[y]);
    }

}

int main(){
    struct chairs ch1;
    ch1.price[0] = 2;
    ch1.price[1] = 11;
    ch1.price[2] = 10;
    sort(ch1.price);
}