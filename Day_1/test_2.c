#include <stdio.h>
int UCLN(int num1, int num2)
{

    if (num1 == 0 || num2 == 0)
    {
        return num1 + num2;
    }
    else
    {

        while (num1 != num2)
        {
            if (num1 > num2)
            {
                num1 -= num2;
            }
            else
            {
                num2 -= num1;
            }
        }
        return num1;
    }
}
int BCNN(int num1, int num2)
{
    return ((num1 * num2)) / (UCLN(num1, num2));
}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int task_1 = UCLN(num1, num2);
    int task_2 = BCNN(num1, num2);
    printf("UCLL :%d - BCNN :%d ", task_1, task_2);
}