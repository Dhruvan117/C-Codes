<<<<<<< HEAD
<<<<<<< HEAD
#include<stdio.h>

int main()
{
    int i;
    unsigned long long int sqr_number=0,k,rem=0,reverse=0,rsn=0,j,rn=0,rrsn=0;
    for(i=1;i<201;i++)
    {
        sqr_number = i*i;
        k = sqr_number;
          while(k!=0)    
         {    
            rem=k%10;    
            reverse=reverse*10+rem;    
            k/=10;    
        }
        printf("%llu is reverse of sqr number\n",reverse);
        rsn=reverse;
        reverse = 0;
        rem=0;

        j=i;
         while(j!=0)    
         {    
            rem=j%10;    
            reverse=reverse*10+rem;    
            j/=10;    
        }  
        printf("%llu its i's reverse of %llu\n",reverse,i);
        rn= reverse;
        rrsn = rn*rn;
        reverse = 0;
        rem=0;
        if (rsn == rn)
        {
            printf("first no. is %llu^2 = %llu\n",i,rsn);
            printf("2nd number is %llu^2 = %llu\n\n",rn,rrsn);
        }
        
    }
=======
#include<stdio.h>

int main()
{
    int i;
    unsigned long long int sqr_number=0,k,rem=0,reverse=0,rsn=0,j,rn=0,rrsn=0;
    for(i=1;i<201;i++)
    {
        sqr_number = i*i;
        k = sqr_number;
          while(k!=0)    
         {    
            rem=k%10;    
            reverse=reverse*10+rem;    
            k/=10;    
        }
        printf("%llu is reverse of sqr number\n",reverse);
        rsn=reverse;
        reverse = 0;
        rem=0;

        j=i;
         while(j!=0)    
         {    
            rem=j%10;    
            reverse=reverse*10+rem;    
            j/=10;    
        }  
        printf("%llu its i's reverse of %llu\n",reverse,i);
        rn= reverse;
        rrsn = rn*rn;
        reverse = 0;
        rem=0;
        if (rsn == rn)
        {
            printf("first no. is %llu^2 = %llu\n",i,rsn);
            printf("2nd number is %llu^2 = %llu\n\n",rn,rrsn);
        }
        
    }
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
#include<stdio.h>

int main()
{
    int i;
    unsigned long long int sqr_number=0,k,rem=0,reverse=0,rsn=0,j,rn=0,rrsn=0;
    for(i=1;i<201;i++)
    {
        sqr_number = i*i;
        k = sqr_number;
          while(k!=0)    
         {    
            rem=k%10;    
            reverse=reverse*10+rem;    
            k/=10;    
        }
        printf("%llu is reverse of sqr number\n",reverse);
        rsn=reverse;
        reverse = 0;
        rem=0;

        j=i;
         while(j!=0)    
         {    
            rem=j%10;    
            reverse=reverse*10+rem;    
            j/=10;    
        }  
        printf("%llu its i's reverse of %llu\n",reverse,i);
        rn= reverse;
        rrsn = rn*rn;
        reverse = 0;
        rem=0;
        if (rsn == rn)
        {
            printf("first no. is %llu^2 = %llu\n",i,rsn);
            printf("2nd number is %llu^2 = %llu\n\n",rn,rrsn);
        }
        
    }
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}