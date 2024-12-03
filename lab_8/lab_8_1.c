#include <stdio.h>
int n = 5;


int main() {
    
    int A[n][n];

        //
    for(int a=0;a < n;a++){
        for(int b=0;b < n;b++){
            A[a][b] = a+b; //Заполнение матрицы
        }
    }
    //

    A[3][2] = -1; //Ставим отрицательный элемент

    for(int a=0;a < n;a++){
        for(int b=0;b < n;b++){
            if(A[a][b]<0){ //проверка на отрицательный элемент
                for(int a=0;a < n;a++){
                    for(int b=0;b < n;b++){
                        A[a][b] = 0; //Заполняем матрицу нулями
        }
    }
            } 
        }
    }

    //
    for(int a=0;a < n;a++){
        for(int b=0;b < n;b++){
            printf("%d ",A[a][b]); //Вывод матрицы
        }
        printf("\n");
    }
    //
}
    
