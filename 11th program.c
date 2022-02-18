//right side pattern
#include<stdio.h>

int main(){
    int i,j,k=1;
    for(i=5;i>0;i--){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=k;j++){
            printf("%d",j);
        }
        printf("\n");
        k++;
    }

}