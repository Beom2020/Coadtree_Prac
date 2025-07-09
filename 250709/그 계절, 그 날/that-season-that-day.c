#include <stdio.h>
#include <stdbool.h>

int y, m, d;

bool IsYoonyun(int y){
    if(y % 4 != 0){
        return false;
    }
    if(y % 4 == 0 && y % 100 == 0){
        return false;
    }
    if(y % 4 == 0 && y % 100){
        if(y % 400 == 0){
            return false;
        }
    }

    return true;
}

bool IsDayExist(int m, int d, int february_day){
    int month_day_range[12] = {
        31, february_day, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 
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

char* get_season(int month) {
    static char* seasons[] = {
        "Winter", "Winter", "Spring", "Spring", "Spring",
        "Summer", "Summer", "Summer", "Fall", "Fall",
        "Fall", "Winter"
    };
    
    if (month >= 1 && month <= 12) {
        return seasons[month - 1];
    }
    return "Invalid";
}

int main(void) {
    scanf("%d %d %d", &y, &m, &d);
    
    // Please write your code here.
    if(IsYoonyun(y)){
        if(IsDayExist(m,d,29)){
            char* season = get_season(m);
            printf("%s",season);
        }
        else{
            printf("-1");
        }
    }
    else{
       if(IsDayExist(m,d,28)){
            char* season = get_season(m);
            printf("%s",season);
        }
        else{
            printf("-1");
        } 
    }


    return 0;
}