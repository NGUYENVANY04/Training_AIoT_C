#include <stdio.h>
void display_fibonaci(int num)
{
    unsigned long a = 1, b = 1;
    unsigned long c = a + b;
    printf("%ld %ld", a, b);
    while (num--)
    {
        printf(" %ld", c);
        a = b;
        b = c;
        c = a + b;

        /* code */
    }
}
int main()
{
    display_fibonaci(70);
}