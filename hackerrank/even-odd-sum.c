#include <stdio.h>

int main()
{
    int totalNumber, number, evenSum=0, oddSum=0;
    scanf("%d", &totalNumber);
    
    while(totalNumber--)
    {
        scanf("%d", &number);
        //number 1 2 3 4 5

        if(number%2==0)
        {
            // number = 2
            evenSum = number+evenSum; // evenSum = 2 + 0
        }
        if(number%2!=0)
        {
            // number = 1
            oddSum = number+oddSum; // oddSum = 1 + 0
            // oddSum+=number;
        }

    }

    printf("%d\n", evenSum);
    printf("%d\n", oddSum);


	return 0;
}

