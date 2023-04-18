#include <stdio.h>

int main()
{
    int totalNumber, number, evenSum=0, oddSum=0;
    scanf("%d", &totalNumber);
    
    while(totalNumber--)
    {
        scanf("%d", &number);

        if(number%2==0)
        {
            evenSum = number+evenSum;
        }
        if(number%2!=0)
        {
            oddSum = number+oddSum;
        }
    }

    printf("%d\n", evenSum);
    printf("%d\n", oddSum);

	return 0;
}

