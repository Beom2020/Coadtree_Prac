#include <stdio.h>
#include <stdbool.h>

bool threesixnine(int n){
    int units = n % 10;
    int tens = n / 10;

    return (units % 3 == 0 || tens % 3 ==0);
}


bool IsMagicNumber(int n){
    return (n % 3 ==0 || threesixnine(n));
}




int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Please write your code here.

    int count=0;
    for(int i=a; i<b+1; i++){
        if(IsMagicNumber(i))
            count++;
    }

    printf("%d",count);

    return 0;
}