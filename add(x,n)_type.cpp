// C PROGRAM TO CALCULATE Pow(x,n),Add(x,n).Sub(x,n),Mul(x,n),Div(x,n)

#include <stdio.h>
int main() {
 char op;
 double first, second;
 printf("Enter an operator (+, -, *, /): ");
 scanf("%c", &op);
 printf("Enter two operands: ");
 scanf("%lf %lf", &first, &second);
 switch (op) {
 case '+':
 printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
 break;
 case '-':
 printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
 break;
 case '*':
 printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
 break;
 case '/':
 printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
 break;
 // operator doesn't match any case constant
 default:
 printf("Error! operator is not correct");
 }
 return 0;
}

