// C program to convert
// Hexadecimal number to Binary

#include <stdio.h>
#include <stdlib.h>

// function to convert Hexadecimal to Binary Number
void HexToBin(char* hex)
{

    long int i = 0;

    while (hex[i]) {

        switch (hex[i]) {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;
        default:
            printf("\nInvalid hexadecimal digit %c",
                hex[i]);
        }
        printf(" ");
        i++;
    }
}


char* inttostr(void* x)
{
    int length = snprintf( NULL, 0, "%x", x );
        char* str = malloc( length + 1 );
        snprintf( str, length + 1, "%x", x );
       // free(str);
        printf("%s\n",str);
        return(str);
            // Convert HexaDecimal to Binary
}
// driver code
int main()
{

    // Get the Hexadecimal number
    int x = 0xa5a5U;
    float f = 1.7f;
    char* pt,gt;
    pt = inttostr((void *)x);
    gt = inttostr((void *)f);

    printf("\nHex is %x Binary value is : ",x);
    HexToBin(pt);
    printf("\nfloat is %f Binary value is : ",f);
    HexToBin(gt);
    free(pt);
    free(gt);

    
}
