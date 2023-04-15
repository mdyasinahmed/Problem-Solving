#include <stdio.h>

int main(void) {
	
    int t, a, b;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);
        if(a>b)
        {
            printf("%d\n", b);
        }
        else if(a<b)
        {
            printf("%d\n", a);
        }
        else{
            printf("%d\n", a);
        }
    }

	return 0;
}
