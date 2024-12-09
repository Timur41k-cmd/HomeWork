#include <stdio.h>

int minFind(int res_arr[10],int num,int min){
        for(int i = 0;i<num;i++){
        if(res_arr[i] < min){
            min = res_arr[i];
        }
    }
    return min;
}

int main() {
    int arr[10] = {1,2,3,10,4,6,12,8,9,10};
    int num=0,min=0;
    for(int i=0;i<10;i++){
        min = min + arr[i];
    }
    int res_arr[10];
    for(int i = 1;i<10-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            res_arr[num] = arr[i];
            num++;
        }
    }

    printf("%d\n",minFind(res_arr,num,min));

}
    
