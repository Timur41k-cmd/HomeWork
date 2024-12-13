#include <iostream>
using namespace std;
int main()
{
    int m,n,max=0,sum=0,index=0;
    m =5;
    n =5;
    int arr2D[m][n];
    
    //
    for(int a=0;a < m;a++){
        for(int b=0;b < n;b++){
            arr2D[a][b] = a+b; //Заполнение матрицы
        }
    }
    //

    for(int a=0;a<m;a++){
        for(int b=0;b<n;b++){
            sum = sum+arr2D[a][b];
        }
        if(sum > max){
            max = sum;
            index = a+1;
        }
        sum = 0;
    }
    cout << "Вывод:\n";
    cout << "Значение наибольшей суммы : " << max << ", Номер строки : " << index << endl;
    cout << endl;

    cout << "Вывод матрицы:\n\n";
    //
    for(int a=0;a < m;a++){
        for(int b=0;b < n;b++){
            cout << arr2D[a][b] << " "; //Вывод матрицы
        }
        cout << endl;
    }
    //

}