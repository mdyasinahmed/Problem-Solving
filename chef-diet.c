#include <stdio.h>

int main()
{
    int t, n, k, i, j, save=0, unableDay;
    scanf("%d", &t);
    int arr[n];
    for(i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if(arr[j]==k)
            {
                save += arr[j];
            }
            if(arr[j]>k)
            {
                save += arr[j]-k;
            }
            else{
                unableDay = arr[j];
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

    

}