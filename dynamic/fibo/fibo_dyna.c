
#include <stdio.h>

int main()
{
    int fibo[44];
    fibo[0] = 1;
    fibo[1] = 1;

    int i;

    i = 2;
    while (i < 45)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        i++;
    }

    int n;

    scanf("%d", &n);
    printf("%d\n", fibo[n]);

    return 0;
}
