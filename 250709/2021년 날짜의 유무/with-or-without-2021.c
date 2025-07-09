#include <stdio.h>
#include <stdbool.h>

bool IsDayExist(int m, int d){
    int month_day_range[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 
    };

    //printf("m : %d d : %d month_day_range[m-1] : %d",m,d,month_day_range[m-1]);

    if(m<13){
        if(d <= month_day_range[m-1]){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }


    
}


int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    // Please write your code here.

    if(IsDayExist(m, d)){
        printf("Yes");
    }
    else{
        printf("No");
    }


    return 0;
}