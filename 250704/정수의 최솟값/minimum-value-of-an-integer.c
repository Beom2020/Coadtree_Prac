#include <stdio.h>

void min(int a, int b, int c){
    int min = 0;
    if(a <= b && a <= c){
        min = a;
    }
    if(b <= a && b <= c){
        min = b;
    }
    if(c <= a && c <= b){
        min = c;
    }

    printf("%d",min);
}



int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // Please write your code here.
    min(a,b,c);
    return 0;
}