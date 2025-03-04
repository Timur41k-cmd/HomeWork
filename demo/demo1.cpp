#include <iostream>

using namespace std;

int factorial(int n){
        int b = 1;
        
        for(int x=1;x<n;x++){
            b = b*x;
            
        }
        return b;
    }

int main()
{
    int B=1,n=1,res;
    
    cout << factorial(6);
}