#include <iostream>
using namespace std;
int main()
{
string anim_l[12] =
{"крыса","корова","тигр","заяц","дракон","змея","лошадь","овца","обезьяна","курица","собака","свинья"};
string color_l[6] = {"зеленый", "красный","желтый", "белый", "черный"};
int year,color, anim;
cout << "Японский календарь" << endl << "Введите год:"<< endl;
cin >> year;
if (year - 1984 < 0){
year = (1984 - year);
year = 60 -(year % 60);
}else{
year = (year -1984);
}
color = ((year % 60) / 12);
anim = ((year%60))%12;
cout<< color_l[color] << " " << anim_l[anim];
}