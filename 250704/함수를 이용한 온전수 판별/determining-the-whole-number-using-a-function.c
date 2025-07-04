#include <stdio.h>
#include <stdbool.h>

bool IsOnjeonsu(int n) {
    if(n % 2 == 0)
        return false;
    if(n % 10 == 5)
        return false;
    if(n % 3 == 0 && n % 9 != 0)
        return false;
    return true;
}



int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    // Please write your code here.

    int cnt=0;

    for(int i=A; i<B+1; i++){
        if(IsOnjeonsu(i))
            cnt += 1;
    }
    printf("%d",cnt);




    return 0;
}