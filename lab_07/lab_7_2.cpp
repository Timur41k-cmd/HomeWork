#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,10,4,5,6,7,8,9,10};
    for(int num1; num1 < 10;num1++){
        for(int num2=num1+1; num2 < 10;num2++){
            if(arr[num1] == arr[num2]){
                if(num2 < num1){
                    cout << num2 << " и " << num1; 
                }else{
                    cout << num1 << " и " << num2; 
                }

            }
        }
    }
}