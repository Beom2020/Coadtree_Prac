#include <stdio.h>
#include <stdbool.h>

int a, b;

bool IsPrime(int n){
    for(int i=2; i<n; i++){
        if(n % i ==0 )
            return false;
    }
    return true;
}


int main() {
    scanf("%d %d", &a, &b);
    // Please write your code here.
    int sum = 0;

    for(int i=a; i<b+1; i++){
        
        if(IsPrime(i)){
            sum = sum + i;
        }
    }
    printf("%d",sum);

    return 0;
}