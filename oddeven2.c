#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define N    100

int number_of_same_characters( const char *, const char * );

int main()
{
    char first[N];
    int  result = 0;    
    size_t n;

    printf( "Enter first string: ");
    gets( first);

    n = strlen( first );
    if ( first[n - 1] == '\n' ) first[n - 1] = '\0';


    result = number_of_same_characters( first, first );

    printf("this output pair is possible");

}

int number_of_same_characters( const char *p, const char *q )
{
    int counter = 0;
    int i;

    for( i = 0; p[i] != '\0' && q[i] != '\0'; ++i )
    {
        int k;
        for(k = 0; p[i] != '\0' && q[i] != '\0'; ++k )
        {
             if ( p[i] == q[k] ) ++counter;
        }
        if (counter%2 == 0)
        {
        }
    else
        {
            printf("Hence the output pairing is not possible");
            exit(0);
        }   
               
    }

    return counter;
}