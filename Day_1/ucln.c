#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d - %d", &a, &b);
    if (a == 0 || b == 0)
    {
        printf("%d", a + b);
        /* code */
    }
    else
    {
        while (a != b)
        {
            if (a > b)
            {
                a -= b;
                /* code */
            }
            else
            {
                b -= a;
            }

            /* code */
        }
        printf("%d", a);
    }
}