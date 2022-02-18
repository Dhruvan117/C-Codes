
//size of diffrent data types
#include<stdio.h>

int main(){
    int a;
    float b;
    char c;
    double d;
    long int e;
    long double f;
    unsigned int g;

    printf("int size %d\n",sizeof(a));
    printf("float size %d\n",sizeof(b));
    printf("char size %d\n",sizeof(c));
    printf("double size %d\n",sizeof(d));
    printf("long int size %d\n",sizeof(e));
    printf("long double size %d\n",sizeof(f));
    printf("unsigned int size %d\n",sizeof(g));
}