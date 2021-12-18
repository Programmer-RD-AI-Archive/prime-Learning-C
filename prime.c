// Second Question
#include <stdio.h>

int is_it_a_prime_number(int number)
{
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("Check is a Number is a prime number or not \n ");
    int n, pn_result;
    printf("Prime Number : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        main();
    }
    pn_result = is_it_a_prime_number(n);
    if (pn_result == 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}
