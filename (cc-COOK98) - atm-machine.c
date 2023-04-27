#include <stdio.h>
#define s 1000

int main(void) 
{
	int t, n, k, i, j, a[s], amount=0;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d %d", &n, &k);
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[j]);
            if(a[j]<=k)
            {
                printf("1");
                k = k - a[j];

            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
        
    
	return 0;
}

