#include<stdio.h>   //function by extension
#include<stdlib.h>    
int arraywekdays[6];
int wekdays(int d[6]);
int main(){
    wekdays(arraywekdays);
    return 0;
}
int weekdays(int d[6]){
    for(int i=0;i<=6;i++){
        int d[i];
        switch (i)
        {
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday\n");
            break;
        case 5:
            printf("Saturday\n");
            break;
        case 6:
            printf("Sunday\n");
            break;
        default:
            break;
        }
    }
}
