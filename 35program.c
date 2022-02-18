<<<<<<< HEAD
<<<<<<< HEAD
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
=======
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
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
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
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}