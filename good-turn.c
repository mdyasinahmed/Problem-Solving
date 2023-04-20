#include <stdio.h>

int main(void) {
	
    int t, x, y;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &x, &y);
        int sum =(x+y);

        if(sum>6) printf("YES\n");
        else printf("NO\n");

    }

	return 0;
}
