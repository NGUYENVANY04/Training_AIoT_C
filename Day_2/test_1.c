/*
        Input : Nhập vào một số nguyên x bất kì(điều kiện : 1 <= x <= 100000)
                    Output : 1. Kiểm tra số x được nhập vào có phải số nguyên tố không
    ? 2. In ra tất cả các số nguyên tố nhỏ hơn x.Nâng cao
    : làm bằng nhiều cách,
    so sánh hiệu năng chương trình
    Gợi ý : để kiểm tra 1 số có phải số nguyên tố không,
            chỉ cần kiểm tra tính chia hết đối với những số nguyên tố
  */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return num > 1;
}
void sieve(int N)
{
    int isPrime[N + 1];
    for (int i = 0; i < N; ++i)
    {
        isPrime[i] = 1;
    }
    isPrime[0] = 0;
    isPrime[1] = 0;
    for (int i = 2; i * i < N; ++i)
    {
        if (isPrime[i] == 1)
        {
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (isPrime[i] == 1)
        {
            printf("%d", i);
        }
    }
}
int main()
{
    int n, num;
    scanf("%d", &num);
    int result = isPrime(num);
    if (result == 1)
    {
        printf("La so nguyen to");
    }
    else
    {
        printf("Khong phai");
    }

    scanf("%d", &n);
    sieve(n);
}