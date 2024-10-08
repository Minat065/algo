
#include <stdio.h>
#include <limits.h>

int fibo(int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else if (n == 20)
        return 10946;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    int ans;
    scanf("%d", &n);

    ans = fibo(n);
    printf("%d\n", ans);
    printf("%d\n",INT_MAX);

    return 0;
}
