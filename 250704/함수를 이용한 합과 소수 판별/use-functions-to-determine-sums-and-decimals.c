#include <stdio.h>
#include <stdbool.h>

bool isDigitSumEven(int n) {

    int digitsum = 0;

    while (n > 0) {
        
        int digit = n % 10;

        digitsum = digitsum + digit;
        
        n /= 10;
    }

    if(digitsum % 2 ==0){
        return true;
    }
    else{
        return false;
    }
}

bool isPrime(int n) {
    if (n < 2) return false;           // 0, 1은 소수가 아님
    for (int i = 2; i * i <= n; i++) { // i는 √n까지 검사
        if (n % i == 0) return false;  // 나눠지는 수가 있으면 소수 아님
    }
    return true; // 어떤 수로도 나눠지지 않으면 소수
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int cnt = 0; 
    // Please write your code here.
    for(int i = a; i < b+1; i++){
        if((isDigitSumEven(i) && isPrime(i))){
            cnt += 1;
        }
    }

    printf("%d", cnt);

    return 0;
}