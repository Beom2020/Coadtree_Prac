#include <stdio.h>

int Cal(int n){
    int num = 0;
    for(int i=1; i<n+1; i++){
        num = num + i;
    }
    num = num/10;

    return num;
}

int main() {
    int n;
    scanf("%d", &n);
    // Please write your code here.
    int num = Cal(n);
    printf("%d",num);
    return 0;
}