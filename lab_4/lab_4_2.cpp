#include <iostream>
using namespace std;
int main()
{
    int arr[150];
    int num = 1000,count,sum;
    cout << "Совершенные числа: " << endl;
    for(int x=1;x<num;x++){
        for(int y=1;y<x;y++){
            if(x%y==0){
                arr[count] = y;
                count=count+1;
}

}
for(int m=0;m<count;m++){
sum = sum + arr[m];
}
if(x == sum){
    cout << sum << " ";
cout << x << " = ";
for(int m=0;m<count;m++){
cout << arr[m];
cout << " ";
}
cout << endl;
}


for(int x=0;x < 150;x++){
    arr[x] =0;
}
count =0;
sum=0;
}
}