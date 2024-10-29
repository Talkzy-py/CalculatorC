#include <stdio.h>

int main(){
    char operation;
    float number1;
    float number2;
    float answer;
    
    printf("What operation would you like to do? (*,/,+,-)\n");
    scanf("%c", &operation);
    printf("What is your first number?\n");
    scanf("%f", &number1);
    printf("What is your second number?\n");
    scanf("%f", &number2);
    switch(operation){
        case '*':
            answer = number1 * number2;
            break;
        case '/':
            answer = number1 / number2;
            break;
        case '+':
            answer = number1 + number2;
            break;
        case '-':
            answer = number1 - number2;
            break;
        default:
            printf("It seems there has been an error!");
            break;
    }
    printf("The answer to your question is %.1f", answer);
    return 0;
}