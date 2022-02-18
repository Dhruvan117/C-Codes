//n number sum
#include<stdio.h>

int main(){
    int i,k,sum=0;
    printf("enter the value that you want to sum up\n");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        sum=sum+i;
    };
    printf("your asked ans is %d",sum);
    printf("\n\n");
}