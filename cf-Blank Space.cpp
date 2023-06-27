#include<stdio.h>

int main()
{
    int t, x, i, count=0;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &x);

        int a[x];
        while(x--){
            for(i=0;i<x;i++){
                scanf("%d", &a[i]);

                if((a[i]==a[i+1]) && a[i]==0){
                    count++;
                }
            }
        }
    }

    return 0;
}