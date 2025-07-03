#include <stdio.h>

// 최대공약수 구하는 함수 (유클리드 호제법)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 최소공배수 구하는 함수
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b;
    
    // 두 수 입력 받기
    scanf("%d %d", &a, &b);
    
    // 최소공배수 출력
    printf("%d\n", lcm(a, b));
    
    return 0;
}