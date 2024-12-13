#include <iostream>
using namespace std;
struct car{
    public:
    string country_maker;
    float engine_volume;
    float gas_consumption;
    float car_price;
    void enterValues(){
        cin >> country_maker >> engine_volume >> gas_consumption >> car_price;
    }
};

int main(){
    struct car num1;

    num1.enterValues();
}