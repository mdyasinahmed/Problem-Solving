#include <stdio.h>
#define s 1000

int main()
{
    int a[s], n, max;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("%d\n", max);

    return 0;
}
