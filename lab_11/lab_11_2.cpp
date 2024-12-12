#include <iostream>

using namespace std;
int numFind(int A[3][3]){
    int count=0;
    bool is_0 = false,is_less_10 = false;
    for(int y=0;y<3;y++){
        for(int x=0;x<3;x++){
            if(A[y][x] == 0){
                is_0=true;
            }
            if(A[y][x] < 10){
                is_less_10=true;
            }
        }
        if(is_0 && is_less_10){
            count = count+1;
        }
        is_0 = false;
        is_less_10 = false;
    }
    return count;
}
int main(){
    int A[3][3] = {{1,2,0},{4,5,0},{7,8,9}}; // Матрица идет построчно
    int res = numFind(A);
    cout << res;

}