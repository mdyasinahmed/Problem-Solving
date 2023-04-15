#include <stdio.h>

int main(void) {
	
    int t, a, b, c;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if((a+b)%2!=0)
        {
            printf("YES\n");
        }
        else if((b+c)%2!=0)
        {
            printf("YES\n");
        }
        else if((c+a)%2!=0)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
	return 0;
}

