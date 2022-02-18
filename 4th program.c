<<<<<<< HEAD
<<<<<<< HEAD
//make calc 
#include<stdio.h>

int main(){

    printf("please enter your 1st no.\n");
    float i;
    scanf("%f",&i);

    printf("please enter your 2nd no.\n");
    float j;
    scanf("%f",&j);

    printf("please enter any one operator\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for divison\n");
    int k;
    scanf("%d",&k);
    
    float l;//for storing the ans

    switch(k){
    case 1:
    l=i+j;
    printf("%f + %f = %f",i,j,l);
    break;

    case 2:
    l=i-j;
    printf("%f - %f = %f",i,j,l);
    break;

    case 3:
    l=i*j;
    printf("%f * %f = %f",i,j,l);
    break;

    case 4:
    l=i/j;
    printf("%f / %f = %f",i,j,l);
    break;

    return 0;

    }

=======
//make calc 
#include<stdio.h>

int main(){

    printf("please enter your 1st no.\n");
    float i;
    scanf("%f",&i);

    printf("please enter your 2nd no.\n");
    float j;
    scanf("%f",&j);

    printf("please enter any one operator\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for divison\n");
    int k;
    scanf("%d",&k);
    
    float l;//for storing the ans

    switch(k){
    case 1:
    l=i+j;
    printf("%f + %f = %f",i,j,l);
    break;

    case 2:
    l=i-j;
    printf("%f - %f = %f",i,j,l);
    break;

    case 3:
    l=i*j;
    printf("%f * %f = %f",i,j,l);
    break;

    case 4:
    l=i/j;
    printf("%f / %f = %f",i,j,l);
    break;

    return 0;

    }

>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
//make calc 
#include<stdio.h>

int main(){

    printf("please enter your 1st no.\n");
    float i;
    scanf("%f",&i);

    printf("please enter your 2nd no.\n");
    float j;
    scanf("%f",&j);

    printf("please enter any one operator\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for divison\n");
    int k;
    scanf("%d",&k);
    
    float l;//for storing the ans

    switch(k){
    case 1:
    l=i+j;
    printf("%f + %f = %f",i,j,l);
    break;

    case 2:
    l=i-j;
    printf("%f - %f = %f",i,j,l);
    break;

    case 3:
    l=i*j;
    printf("%f * %f = %f",i,j,l);
    break;

    case 4:
    l=i/j;
    printf("%f / %f = %f",i,j,l);
    break;

    return 0;

    }

>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}