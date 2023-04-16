#include <stdio.h>

int main()
{
    int n, i, count=0;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            count+=2;
            printf("%d\n", count);
        }
    }
    if(count==0)
    {
        printf("%d\n", count-=1);
    }
	return 0;
}

