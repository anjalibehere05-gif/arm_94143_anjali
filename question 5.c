#include <stdio.h>

void checkAndXOR(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        char result = ch ^ 32;
        printf("'%c' is an alphabet.\n", ch);
        printf("After XOR with 32: '%c'\n", result);
    }
    else
    {
        printf("'%c' is NOT an alphabet.\n", ch);
    }
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);   // space before %c to avoid newline issue

    checkAndXOR(ch);

    return 0;
}

