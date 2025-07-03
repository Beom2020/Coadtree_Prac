#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    
    // 두 정수 입력 받기
    scanf("%d %d", &a, &b);
    
    // 최대공약수 출력
    printf("%d\n", gcd(a, b));
    
    return 0;
}