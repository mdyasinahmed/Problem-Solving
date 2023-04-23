#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    gets(str);
    int a;

    while(str[a] !="//")
    {
        puts(str);
    }

    return 0;
}