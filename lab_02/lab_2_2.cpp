#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float x1,x2,y1,y2,r1,r2,dist,sum_of_rad;
cout << "Введите x1,y1,r1:" << endl;
cin >> x1;
cin >> y1;
cin >> r1;
cout << "Введите x2,y2,r2:" << endl;
cin >> x2;
cin >> y2;
cin >> r2;
dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
sum_of_rad = r1+r2;
if (dist < sum_of_rad){
cout << "Окружности пересекаются";
}
else{
cout << "Окружности не пересекаются";
}
}