#include <stdio.h>
#include <stdlib.h>

int main()
{
    int oper, upper, num;

    printf("Enter 1 for Fibonacci sequence or Enter 2 for search Factorial : ");
    scanf("%d", &oper);

    switch(oper)
    {
    case 1:
        printf("Enter the upper bound : ");
        scanf("%d", &upper);

        printf("Fibonacci sequence :");
        for(int i = 0; i < upper; i++)
        {
            printf("%d ", fibonacci(i));
        }
        break;

    case 2:
        printf("Enter a number : ");
        scanf("%d", &num);
        printf("Factorial is %d", factorial(num));
        break;

    default:
        printf("Invalid operation");
        break;

    }
}

int fibonacci(int no)
{
    //fibonacci
}

int factorial(int no)
{
    //factorials
}
