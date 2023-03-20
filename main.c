#include <stdio.h>
#include <stdlib.h>

/// The code aims that learners analys why condition, loops and function are used in C Programming Language.
/// The code calculates sum of even number.

/// The block is used for user assigns maximum number.

int get_number()
{
    int max_number;
    printf("Enter your maximum number\n");
    scanf("%d", &max_number);

    /*

    It is used whether user assigns number correctly

     float num_converted;
     num_converted = scanf("%f", &max_number);

         if (num_converted != 1)
    {

            printf("Invalid Input");
            exit(1);
    }

    */

    return max_number;

}

/// The block calculates sum of even number

int sum_even(max_number_func)
{
    int sumF = 0;
    int i;

    for (i = 0; i<=max_number_func; i++)
    {
        if (i%2==0)
        {
            sumF += i;
            i++;
        }
        else
        {
            i++;
        }

    }
    return sumF;
}

int main()
{
    int max_number = get_number();
    int sum = sum_even(max_number);
    printf("Sum = %d", sum);

    return 0;
}
