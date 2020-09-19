#include<stdio.h>   //funcion por extencion
#include<stdlib.h>    
int arrayDay[6];
int wekDays(int d[6]);
int main(){
    wekDays(arrayDay);
    return 0;
}
int wekDays(int d[6]){
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