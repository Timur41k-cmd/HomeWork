#include <stdio.h>

int main() {
  int num,res;
  printf("Формула 2n!\nВведите число n:\n");
  scanf("%d",&num);
  for(int x=1;x<num+1;x++){
    res = res*x;
  }
  printf("%d",2*res);
}