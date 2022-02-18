#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  
    // make two process which run same
    // program after this instruction
    if (0 == fork())
    {
        printf("If part executed \r\n");
    }
    else
    {
        printf("Else part executed \r\n");
    }
  
    return 0;
}