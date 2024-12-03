#include <stdio.h>

int main() {
    int N[10] = {1,2,3,4,50,6,700,80,9,10};
    int max[2]={N[0],N[1]};
    int index_list[2];
    for(int x=0;x<10-1;x++){
        if((N[x]+N[x+1])>(max[0]+max[1])){
            max[0] = N[x];
            max[1] = N[x+1];
            index_list[0] = x;
            index_list[1] = x+1;
        }
    }

    printf("%d : %d",max[0],max[1]);

}
    
