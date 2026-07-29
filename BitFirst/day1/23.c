#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a char ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("given input is alfabate in Upper leter");
    }
    else
    {
        if (ch >= 'a' && ch <= 'z')
        {
            printf("given input is alfabate in lower leter");
        }
        else
        {
            if (ch >= '0' && ch <= '9')
            {
                printf("Given input is digit");
            }
            else
            {
                if (ch == '#' || ch == '@' || ch == '$')
                {
                    printf("special sybole");
                }
                else
                {
                    printf("sybole or anything other");
                }
            }
        }
    }
}