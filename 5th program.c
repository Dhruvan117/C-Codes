//sphere volume from radious

#include<stdio.h>
#define PI 3.14159
int main()
{ 
 double radius;
 printf("Enter radius:");
 scanf("%lf", &radius);
printf("volume is : %lf \n\n", (4 *PI*radius*radius*radius)/3 );
return 0;
}