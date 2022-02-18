//pyramid pattern with numbers
#include<stdio.h>

int main(){
    int i,j,k=1;
    for(i=5;i>0;i--){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("%d",6-i);
        }
        for(j=2;j<=k;j++){
            printf("%d",6-i);
        }
        printf("\n");
        k++;
    }

}