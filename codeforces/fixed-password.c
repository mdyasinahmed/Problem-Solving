#include <stdio.h>

int main(void)
{
    int x, c=1999;
    
    while (scanf("%d", &x) == 1)
    {
        if(x==c)
        {
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }

	return 0;
}

