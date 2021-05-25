#include <stdio.h>

int sum_of_digit(int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}
 

int main()
{
    int num = 1234;
    int result = sum_of_digit(num);
    printf("Sum of digits of %d is %d\n", num, result);
    return 0;
}
