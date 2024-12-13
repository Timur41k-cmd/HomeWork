#include <iostream>
using namespace std;
int main()
{
string res_anim,res_color;
string anim_l[12] =
{"крыса","корова","тигр","заяц","дракон","змея","лошадь","овца","обезьяна","курица","собака","свинья"};
string color_l[5] = {"зеленый", "красный","желтый", "белый", "черный"};
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
switch(color){
case 0:
res_color = "зеленый";
case 2:
res_color = "красный";
case 3:
res_color = "желтый";
case 4:
res_color = "белый";
case 5:
res_color = "черный";
}

switch(anim){
case 0:
res_anim = anim_l[0];
case 1:
res_anim = anim_l[1];
case 2:
res_anim = anim_l[2];
case 3:
res_anim = anim_l[3];
case 4:
res_anim = anim_l[4];
case 5:
res_anim = anim_l[5];
case 6:
res_anim = anim_l[6];
case 7:
res_anim = anim_l[7];
case 8:
res_anim = anim_l[8];
case 9:
res_anim = anim_l[9];
case 10:
res_anim = anim_l[10];
case 11:
res_anim = anim_l[11];



}


}