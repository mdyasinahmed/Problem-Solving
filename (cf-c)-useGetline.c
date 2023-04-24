#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    gets(str);
    int a, count;

    while(str[a] !="//")
    {
        count++;
    }

    while(count--){
        printf("%c\n", str);
    }

    return 0;
}