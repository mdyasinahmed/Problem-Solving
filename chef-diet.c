#include <stdio.h>

int main()
{
    int t, n, k, i, j, save=0, unableDay;
    scanf("%d", &t);
    int arr[n];
    for(i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &k);
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &arr[j]);
            if(arr[j]==k)
            {
                save += k-arr[j];
            }
            if(arr[j]>k)
            {
                save += arr[j]-k;
            }
            if(arr[j]<k)
            {
                save = save - (k-arr[j]);
                unableDay = arr[j];
            }
        }
    }
    if(save>=k)
        {
            printf("YES\n");
        }
        else{
            printf("NO %d\n", unableDay);
        }

    

}