#include <stdio.h>

int main(){

    char ch;
    float total = 0.0f;
    float number = 0.0f;
    char op = '+';

    printf("Enter an expression: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch >= '0' && ch <= '9'){
            number = number * 10 + (ch - '0');
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' ) {
            switch (op){
            case '+': total += number; break; 
            case '-': total -= number; break; 
            case '*': total *= number; break; 
            case '/': total /= number; break; 
            }
            number = 0.0f;
            op = ch;
        }
    }
    
    switch (op)
    {
    
            case '+': total += number; break; 
            case '-': total -= number; break; 
            case '*': total *= number; break; 
            case '/': total /= number; break; 
    }

    printf("Value of expression: %.2f\n", total);

    return 0;
}