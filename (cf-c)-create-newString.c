#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1000];
    char str2[1000];
    int len1, len2;

    gets(str1);
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    printf("%d %d\n", len1, len2);
    printf("%s %s\n", str1, str2);


    return 0;
}