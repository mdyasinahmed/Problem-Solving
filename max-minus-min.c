#include <stdio.h>

int main(void)
{
    int t, a, b, c;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
        int min = a < b ? (a < c ? a : c) : (b < c ? b : c);

        printf("%d\n", (max-min));
    }
    
    
    return 0;
}

