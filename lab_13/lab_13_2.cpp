#include <iostream>
using namespace std;

struct chairs{
    public:
    string countryMaker;
    float chairHeight;
    string material;
    float price[3];
    void sort(){
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
            cout << price[y] << " ";
        }

    }

};

int main(){
    struct chairs ch1;
    ch1.price[0] = 2;
    ch1.price[1] = 11;
    ch1.price[2] = 10;
    ch1.sort();
}