#include <stdio.h>
#include <stdbool.h>

void numFind(int A[3][3]){
    int mul = 1;
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++){
            if(A[x][y]%2 == 0 && A[x][y]!=0){
                mul = mul*A[x][y];
            }
        }
        printf("В столбце %d произведение четных числе равно: %d\n",x,mul);
        mul = 1;

        
    }

}
int main(){
    int A[3][3] = {{1,2,0},{4,5,0},{2,8,9}}; // Матрица идет по столбцам, а не построчно
    numFind(A);

}