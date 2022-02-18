//extra knowledge code char to int without conversion
#include<stdio.h>
int main(){
    char a="d",b="D";
    printf("%d,%d\n",a,b);
    int i;
    i=b-a;
    printf("%d",i);
}