#include <stdio.h>
#include <string.h>

int main()
{
    char str[81];
    char str2[81];
    printf("Str: "); gets(str);
    strcpy(str2, str);
    int len = strlen(str);
    printf("uppercase: %s\n", strupr(str));
}