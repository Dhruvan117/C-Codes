// C program to convert
// Hexadecimal number to Binary

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//pointer fuction which conver int into string and return address of string
char* inttostring(int a)  
{
    int length = snprintf( NULL, 0, "%x", a );
    char* str = malloc( length + 1 );
    snprintf( str, length + 1, "%x", a );
    return (str);
}


// function to convert Hexadecimal to Binary Number with switch case
void HexToBin(char* hexdec)
{

    int count; 
    long int i = 0;

    while (hexdec[i]) {

        switch (hexdec[i]) 
        {
        case '0':
            printf("0000 ");
            break;

        case '1':
            printf("0001 ");
            break;

        case '2':
            printf("0010 ");
            break;

        case '3':
            printf("0011 ");
            break;

        case '4':
            printf("0100 ");
            break;

        case '5':
            printf("0101 ");
            break;

        case '6':
            printf("0110 ");
            break;

        case '7':
            printf("0111 ");
            break;

        case '8':
            printf("1000 ");
            break;

        case '9':
            printf("1001 ");
            break;

        case 'A':
        case 'a':
            printf("1010 ");
            break;

        case 'B':
        case 'b':
            printf("1011 ");
            break;

        case 'C':
        case 'c':
            printf("1100 ");
            break;

        case 'D':
        case 'd':
            printf("1101 ");
            break;

        case 'E':
        case 'e':
            printf("1110 ");
            break;

        case 'F':
        case 'f':
            printf("1111 ");
            break;

        default:
            printf("\nInvalid hexadecimal digit %c",
                hexdec[i]);
        }
        i++;

    }
}


//function to convert float to int (upto 3 decimal accuracy)
void floatToBin(float original)
{
    long unsigned int intPart, bin = 0, p = 0, binFract = 0,intDecipart=0;
    float remiander=0,deciPart;


    intPart = original;              //taking intrgert part seperately
    deciPart = original - intPart;   //taking decimal part seperately
    
    while(intPart != 0)
    {
        remiander = intPart%2;
        bin = bin + remiander * pow(10,p);
        intPart = intPart/2;
        p++;
    }
   
    p=0;                             //reseting p and remiander
    remiander = 0;
    deciPart = deciPart * 1000;      //converting decimal to int with 3 integer accuracy
    intDecipart = (int)deciPart;

    while(intDecipart != 0)
    {
        remiander = intDecipart%2;
        binFract = binFract + remiander * pow(10,p);
        intDecipart = intDecipart/2;
        p++;
    }
    printf("\nyour float is %.3f and your binary is %d.%d\n", original, bin, binFract);
}



// main code start exection here
int main()
{
    int a = 0xA5A5U;    
    float f = 9.7f;
    char* str;                        //to store string address

    // Convert HexaDecimal to Binary
    printf("\nyour hex is %x and Equivalent Binary value is : ", a);
    str = inttostring(a);
    HexToBin(str);
    free(str);                        //to release the string storage
    floatToBin(f);
}
