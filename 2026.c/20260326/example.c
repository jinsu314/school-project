#include <stdio.h>

int main(void)
{
    int number1 = 10;
    int number2 = 10;

    printf{"전위 증가 연산 전(number1) : %d\n", number1);
    printf("전위 증가 연산 (++number1) : %d\n", ++number1);
    printf{"전위 증가 연산 후(number1) : %d\n", number1);

    printf{"후위 증가 연산 전(number2) : %d\n", number2);
    printf("후위 증가 연산 (++number2) : %d\n", ++number2);
    printf{"후위 증가 연산 후(number2) : %d\n", number2);
    return 0;
}