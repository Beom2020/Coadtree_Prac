#include <stdio.h>
#include <stdbool.h>

int n1, n2;
int a[100], b[100];

bool IsConsecutiveSubsequence(int n1, int n2){

    int flag = 0;

    int arr_num_diff = n1 - n2 + 1;

    
    int cursor = 0;
    for(int i=0; i<arr_num_diff; i++){

        flag= 0 ;

        for(int j=cursor; j<n2+cursor; j++){
        
            //printf("i = %d , j = %d, a[j] = %d, b[j] = %d\n",i,j,a[j],b[j]);
            if(a[j]==b[j-cursor]){
                flag += 1;
            }
        }
        cursor = cursor + 1;
        //printf("cursor : %d\n",cursor);

        if(flag==n2){
            //printf("Yes");
            return true;
        }
    }
    return false;
}

int main() {
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < n2; j++)
        scanf("%d", &b[j]);
    
    // Please write your code here.
    if(IsConsecutiveSubsequence(n1,n2)){
        printf("Yes");
    }
    else{
        printf("No");
    }



    return 0;
}