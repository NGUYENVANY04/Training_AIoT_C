/*
1.Viết chương trình yêu cầu người dùng nhập vào 1 chuỗi, xoá đi các ký tự không phải A, B, C ..
. Z, a, b, c, ... ,z. Nếu có 2 hoặc nhiều khoảng trắng cạnh nhau thì xoá bớt đi chỉ để lại 1 khoảng trắng.
a. In ra chuỗi sau khi đã xử lí
b. In ra chuỗi theo thứ tự các ký tự đảo ngược
c. Convert các ký tự chữ hoa thành chữ thường rồi in ra.
Chia các hàm chức năng hợp lí, không nên chỉ viết mỗi hàm main.
*/
#include <stdio.h>
#include <string.h>
void handle_String(char *str)
{
    int size = strlen(str);
    char temp[size];
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] < 'z' && str[i] > 'A') || (str[i] == ' ' && str[i + 1] != ' '))
        {
            temp[count++] = str[i];
        }
    }
    temp[count] = '\0';
    for (int i = 0; temp[i] != '\0'; i++)
    {
        printf("%c", temp[i]);
    }
}
void reverse(char *str)
{
    for (int i = strlen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
        /* code */
    }
}
void convert(char *str)
{
    for (int i = 0; i != '\0'; i++)
    {
        // if (str[i] < 'Z' && str[i] > 'A')
        // {
        //     str[i] += 32;
        // }
        printf("%c", str[i]);

        /* code */
    }
}
int main()
{
    char str[18] = "@n Van Y 123";
    printf("Task 1: ");

    handle_String(str);
    printf("\nTask 2: ");
    reverse(str);
    printf("\nTask 3: ");
    convert(str);
}