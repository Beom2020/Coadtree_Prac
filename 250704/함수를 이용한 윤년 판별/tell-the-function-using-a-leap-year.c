#include <stdio.h>
#include <stdbool.h>

bool IsYoun(int n){
    if(n % 4 != 0)
        return false;
    if(n % 100 == 0 && n % 400 !=0)
        return false;
    
    return true;
}

int main() {
    int y;
    scanf("%d", &y);
    
    // Please write your code here.
    bool bol = true;
    bol = IsYoun(y);
    
    if(bol == 1 ){
        printf("true");
    }
    else{
        printf("false");
    }

    return 0;
}