#include "main.h"

/**
 * fizz_buzz - Prints the numbers from 1 to 100, replacing
 * multiples of 3 with Fizz, multiples of 5 with Buzz,
 * and multiples of both with FizzBuzz.
 */
void fizz_buzz(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else if (i % 3 == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
        }
        else if (i % 5 == 0)
        {
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else
        {
            int num = i;
            int digits = 0;

            while (num != 0)
            {
                digits++;
                num /= 10;
            }

            num = i;

            while (num != 0)
            {
                int digit = num % 10;
                _putchar(digit + '0');
                num /= 10;
            }

            while (digits < 2)
            {
                _putchar(' ');
                digits++;
            }
        }

        if (i != 100)
        {
            _putchar(' ');
        }
    }

    _putchar('\n');
}
