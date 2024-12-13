#include <iostream>
using namespace std;
int main(){
    int z,a,b;
    cout << "Введите значение a:" << endl;
    cin >>a;
    cout << "Введите значение b:" << endl;
    cin >>b;
    z = max(a,2*b) * max(2*a-b,b);
    cout << "Результат: " <<z;
}