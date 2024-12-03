#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int x;x < 10;x++){
        cout << "Введите число: " << x+1 << endl;
        cin >> arr[x];
    }
    for(int x;x < 10;x++){
        if((arr[x]*arr[x])>100){
            cout << arr[x] << " = " << arr[x]*arr[x] << endl;
        }
    }
}