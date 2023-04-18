#include <stdio.h>

int main()
{
    int t, n, digit;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
    }

    while(n<0)
    {
        digit = n % 10;
        printf("%d \n", digit);
        n /= 10;
    }

    return 0;
}