#include <stdio.h>
#include <stdbool.h>

// 조건을 판단하는 함수
bool isEvenAndDivisibleBy5(int n) {

    int tens = n/10;
    int units = n % 10;

    return (n % 2 == 0) && ((tens+units) % 5 == 0);
}

int main() {
    int n;
    scanf("%d", &n);

    if (isEvenAndDivisibleBy5(n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}