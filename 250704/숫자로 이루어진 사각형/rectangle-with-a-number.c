#include <stdio.h>


void NumRect(int n){
    int number=0;


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            number++;
            if(number > 9){
                number = 1;
            }
            printf("%d ",number);
        }
        printf("\n");
    }
}


int main() {
    int N;
    scanf("%d", &N);
    // Please write your code here.
    NumRect(N);
    return 0;
}