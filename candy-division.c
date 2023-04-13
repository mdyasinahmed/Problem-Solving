#include <stdio.h>

int main(void) {
	
    int T, N;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &N);

        if(N%3==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }



	return 0;
}