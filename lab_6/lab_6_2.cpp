#include <iostream>
using namespace std;
int main()
{
    int num,count,first;
    cin >> num;
    do{
        num = num / 10;
        count = count+1;
    }while(num > 10);
    cout << "Количество цифр: " << count << endl << "Первая цифра: " << num;
}