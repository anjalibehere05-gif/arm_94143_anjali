#include <stdio.h>

unsigned char makeEvenParity(unsigned char byte)
{
    int count = 0;
    unsigned char temp = byte;

    
    while (temp)
    {
        count += temp & 1;
        temp >>= 1;
    }

    
    if (count % 2 != 0)
    {
        byte = byte | 0x80;   
    }

    return byte;
}

int main()
{
    unsigned char data;

    printf("Enter a byte value (0–255): ");
    scanf("%hhu", &data);

    printf("Original byte : %u\n", data);

    data = makeEvenParity(data);

    printf("After parity check/set MSB: %u\n", data);

    return 0;
}


    

