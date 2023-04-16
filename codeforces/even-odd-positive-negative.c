#include <stdio.h>

int main(void)
{
    int n, i, even=0, odd=0, positive=0, negative=0;
    scanf("%d", &n);
	int a[n];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0) even++;
        if(a[i]%2!=0) odd++;
        if(a[i]>0) positive++;
        if(a[i]<0) negative++;
    }
        
        printf("Even: %d\n", even);
        printf("Odd: %d\n", odd);
        printf("Positive: %d\n", positive);
        printf("Negative: %d\n", negative);


	return 0;
}

