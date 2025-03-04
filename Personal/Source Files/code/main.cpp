#include <iostream>
#include "studentFunctions.h"
#include <string>
using namespace std;



int main(){
    student *university = NULL;
    int res,k,age;
    string name,nameafter,namebefore;
    float gpa;
    res = 1;
    while(res!= 0){
        cout <<
        "0. break\n"<<
        "1. addfirst\n"<<
        "2. printList\n"<<
        "3. addLast\n"<<
        "4. addAfter\n"<<
        "5. addBefore\n"<<
        "6. delElement\n"<<
        "7. printName\n";
        cin >> res;
        cout << "\n";
        switch(k){
            case 0:{
                break;
            }
            case 1:{
                cin >> name>>gpa>>age;
                addfirst(university,name,gpa,age);
                break;
            }
            case 2:{
                printList(university);
                break;
            }
            case 3:{
                cin >> name>>gpa>>age;
                addlast(university,name,gpa,age);
                break;
            }
            case 4:{
                cin >> name>>gpa>>age>>nameafter;
                AddAfter(university,name,gpa,age,nameafter);
                break;
            }
            case 5:{
                cin >> name>>gpa>>age>>namebefore;
                AddBefore(university,name,gpa,age,namebefore);
                break;
            }

            case 6:{
                cin >> name;
                delElement(university,name);
                break;
            }
            case 7:{
                cin>>name;
                printName(university,name);
                break;
            }
        }
    }
}