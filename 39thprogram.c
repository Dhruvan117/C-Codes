<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>

int main (void)
{
    const int a=10;           //constant a's value
    printf("a is %d \r\n",a);
    int *p;  
    p = &a;                   //a's address is stored in p pointer
    *p = 20;                  //here p's value direct go in to a's address

    printf("a is now %d \r\n",a);
    
    //a = 20;

    return 0;
=======
#include <stdio.h>

int main (void)
{
    const int a=10;           //constant a's value
    printf("a is %d \r\n",a);
    int *p;  
    p = &a;                   //a's address is stored in p pointer
    *p = 20;                  //here p's value direct go in to a's address

    printf("a is now %d \r\n",a);
    
    //a = 20;

    return 0;
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
#include <stdio.h>

int main (void)
{
    const int a=10;           //constant a's value
    printf("a is %d \r\n",a);
    int *p;  
    p = &a;                   //a's address is stored in p pointer
    *p = 20;                  //here p's value direct go in to a's address

    printf("a is now %d \r\n",a);
    
    //a = 20;

    return 0;
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}