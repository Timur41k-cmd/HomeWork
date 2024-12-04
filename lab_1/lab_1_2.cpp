#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c,res;
cout<<"Вычисление длины биссектрисы треугольника, по длине его сторон" << endl;
cout<<"Сторона a:" << endl;
cin >> a;
cout<<"Сторона b:" << endl;
cin >> b;
cout<<"Сторона c:" << endl;
cin >> c;
res = ((1/(a+b))*sqrt(a*b*(a+b+c)*(a+b-c)));
cout<<"Длина биссектрисы: " << res;
}