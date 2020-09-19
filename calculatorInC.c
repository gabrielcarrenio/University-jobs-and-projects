#include<stdio.h>
void inputData(char *oper, float *fnumber, float *snumber);

float calculate(char oper,float fnumber, float snumber);

int main(){

    char operator;
    float firstNumber, secondNumber;

    inputData(&operator,&firstNumber,&secondNumber);

    calculate(operator,firstNumber,secondNumber);

    return 0;
}
void inputData(char *oper, float *fNumber, float *sNumber){

    printf("Enter an operator (+,-,*,/) : ");
    scanf("%c", &(*oper));

    printf("Enter operand: ");
    scanf("%f",&(*fNumber));

    printf("Enter operand: ");
    scanf("%f",&(*sNumber));
}
float calculate(char oper,float fNumber, float sNumber){

    switch (oper){
    case '+':
        printf("%.1f + %.1f = %.1f\n",fNumber, sNumber, fNumber + sNumber);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f\n",fNumber, sNumber, fNumber - sNumber);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f\n",fNumber, sNumber, fNumber * sNumber);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f\n",fNumber, sNumber, fNumber / sNumber);
        break;
    default: printf("Operator is not correct!\n");
        break;
    }
}