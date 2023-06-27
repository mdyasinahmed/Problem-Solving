#include <stdio.h>

int main()
{
    int t, m, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &m, &n);

        if(n*36>=m){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}
