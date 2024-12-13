#include <stdio.h>
#include <string.h>


struct scooter{
    char *maker[20];
    float capacity;
    int numberOfSpeeds;
    float price;

};

int main(){
    struct scooter num1;

    *num1.maker = "China";
    num1.capacity = 5.0;
    num1.numberOfSpeeds = 3;
    num1.price = 350;
    printf("%f",num1.capacity);
}