#include <iostream>
using namespace std;


string line = "----------------------------------";

struct cube{
    string name;
    float friction;
    float mass;
    bool collider;
};

int main(){
    cube cube1;
    cube1.name = "main cube";
    cube1.friction = 2;
    cube1.mass = 20;
    cube1.collider = true;

    cube cube2;
    cube2.name = "second cube";
    cube2.friction = 15;
    cube2.mass = 50;
    cube2.collider = false;


    cube* ptr[2]; // список
    ptr[0] = &cube1;\ 
    ptr[1] = &cube2;
    cout << endl;
    cout << "Name | Friction | Mass | Collider" << endl;
    cout << line << endl;
    for(int x=0;x<2;x++){
        cout << x+1 << ". | " << ptr[x]->name << " | " << ptr[x]->friction << " | " << ptr[x]->mass << " | " << ptr[x]->collider << " | "<< endl;
        cout << line << endl;


    }
    
}