#include <stdio.h>
#include <stdlib.h>

void displayBinary(unsigned int num)
{
    int i;

    printf("Binary representation: ");
    for (i = 7; i >= 0; i--)   // for 8-bit number
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    unsigned int number;

    if (argc != 2)
    {
        printf("Usage: program_name <number>\n");
        return 1;
    }

    number = atoi(argv[1]);

    printf("Decimal number: %u\n", number);
    displayBinary(number);

    return 0;
}

