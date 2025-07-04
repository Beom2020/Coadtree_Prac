#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}

int main() {
    int a, c;
    char o;
    
    scanf("%d %c %d", &a, &o, &c);
    
    // Please write your code here.
    if(o == '+'){
        printf("%d %c %d = %d", a, o, c, add(a,c));
    }
    else if(o == '-'){
        printf("%d %c %d = %d", a, o, c, sub(a,c));
    }  
    else if(o == '/'){
        printf("%d %c %d = %d", a, o, c, div(a,c));
    }  
    else if(o == '*'){
        printf("%d %c %d = %d", a, o, c, mul(a,c));
    }  
    else{
        printf("False");
    }
    return 0;
}