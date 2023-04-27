#include <stdio.h>

int main(void) 
{
	int t, n, k, i, j;
    scanf("%d", &t);

    int a[n];

    for(i=0; i<t; i++)
    {
        scanf("%d %d", &n, &k);
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[j]);

            if(a[j]<k)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
    }
        
    
	return 0;
}

