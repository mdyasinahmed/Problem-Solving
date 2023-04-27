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
            if(a[j]<k)
            {
                amount = a[j];
                printf("1");
                amount = a[j] - a[j+1];
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

