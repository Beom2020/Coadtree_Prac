#include <stdio.h>
#include <stdbool.h>

// 3, 6, 9가 숫자 안에 포함되어 있는지 확인
bool contains369(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit == 3 || digit == 6 || digit == 9) {
            return true;
        }
        n /= 10;
    }
    return false;
}

// 369 게임 조건을 만족하는지 확인
bool isMagicNumber(int n) {
    return (n % 3 == 0) || contains369(n);
}

int main() {
    int A, B;
    int count = 0;
    
    scanf("%d %d", &A, &B);
    
    for (int i = A; i <= B; i++) {
        if (isMagicNumber(i)) {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}