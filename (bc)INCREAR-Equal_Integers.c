#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        
        int i;
        for(i=0; i<(x!=y); i++){
            x = x+1;
            y = y+2;
        }

        printf("%d\n", i);
    }

    return 0;
}