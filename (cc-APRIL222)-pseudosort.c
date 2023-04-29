#include <stdio.h>
#define s 1000
int main(void)
{
	int t, n, i, a[s], count=0;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);

            if(a[i] < a[i+1]) count++;
        }
        
        if(count>0) printf("YES\n");
        else printf("NO\n");
    }

	return 0;
}

