#include <iostream>
using namespace std;
int main()
{
    int num,count=0,first=0;
    cin >> num;
    do{
        
        count = count+1;
        first = num;
        num = num / 10;
    }while(num>0);
    cout << "Количество цифр: " << count << endl << "Первая цифра: " << first;
}