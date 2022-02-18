<<<<<<< HEAD
<<<<<<< HEAD
//file reading, making array of intigers, generating avg and lax of array and send that to new file

// in a same path array.txt = 7  5  6  7  8  9  9  8  6  is available

#include<stdio.h>

void read_data(FILE *ptr,int d[], int *size, int k)  //integers into an array that is created with the first integer telling you how many to read.
{
	*size = 0;
	int i=0;
	for(i=0;i<k;i++)
	{
		fscanf(ptr, "%d", &d[*size]);
		(*size)++;
	}
}

void print_data(int d[], int size) //for printing collected data
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",d[i]);
	}
}

double average(int d[], int size)  // for finding average no of array
{
	int i;
	double avg=0.0;
	for(i=0;i<size;i++)
	{
		avg +=d[i];
	}
	return (avg/size);
}

double max(int d[], int n)  //for finding max no of array
{
	int i;
	for (i=1; i < n; ++i)
	{
    	if (d[0] < d[i]) 
    	{
      	d[0] = d[i];
    	}
    }
    return d[0];
}

int main()    //main program starts here
{
	FILE *ifp, *ifn;   //1 for reading,other for righting
	int sz,i,k;
	

	ifp=fopen("array.txt","r");  //file opens here withe read permission
	fscanf(ifp,"%d", &k);  //scan first int and and store in adress og k
	int data[k];  // making a array of K size
	read_data(ifp, data, &sz, k);  //for reading data from file (according to first no)
	print_data(data,sz);       //for data printing
	printf("\naverage score is %10f",average(data,sz)); //finding average by function calling
	printf("\nmax no of array is %lf",max(data,sz));  //finding max no from array by function calling
	fclose(ifp); //file closing
	ifn=fopen("answer-hw3.txt","w");  //new file opening with write permission
	fprintf(ifn, "average score is %lf",average(data,sz));  //writing a data of avg in to new file
	fprintf(ifn, "\nmax no of array is %lf",max(data,sz));  //writing data of max no in new file
	fclose(ifn);  //new file closed

    
  
   return 0;
}
=======
//file reading, making array of intigers, generating avg and lax of array and send that to new file

// in a same path array.txt = 7  5  6  7  8  9  9  8  6  is available

#include<stdio.h>

void read_data(FILE *ptr,int d[], int *size, int k)  //integers into an array that is created with the first integer telling you how many to read.
{
	*size = 0;
	int i=0;
	for(i=0;i<k;i++)
	{
		fscanf(ptr, "%d", &d[*size]);
		(*size)++;
	}
}

void print_data(int d[], int size) //for printing collected data
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",d[i]);
	}
}

double average(int d[], int size)  // for finding average no of array
{
	int i;
	double avg=0.0;
	for(i=0;i<size;i++)
	{
		avg +=d[i];
	}
	return (avg/size);
}

double max(int d[], int n)  //for finding max no of array
{
	int i;
	for (i=1; i < n; ++i)
	{
    	if (d[0] < d[i]) 
    	{
      	d[0] = d[i];
    	}
    }
    return d[0];
}

int main()    //main program starts here
{
	FILE *ifp, *ifn;   //1 for reading,other for righting
	int sz,i,k;
	

	ifp=fopen("array.txt","r");  //file opens here withe read permission
	fscanf(ifp,"%d", &k);  //scan first int and and store in adress og k
	int data[k];  // making a array of K size
	read_data(ifp, data, &sz, k);  //for reading data from file (according to first no)
	print_data(data,sz);       //for data printing
	printf("\naverage score is %10f",average(data,sz)); //finding average by function calling
	printf("\nmax no of array is %lf",max(data,sz));  //finding max no from array by function calling
	fclose(ifp); //file closing
	ifn=fopen("answer-hw3.txt","w");  //new file opening with write permission
	fprintf(ifn, "average score is %lf",average(data,sz));  //writing a data of avg in to new file
	fprintf(ifn, "\nmax no of array is %lf",max(data,sz));  //writing data of max no in new file
	fclose(ifn);  //new file closed

    
  
   return 0;
}
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
//file reading, making array of intigers, generating avg and lax of array and send that to new file

// in a same path array.txt = 7  5  6  7  8  9  9  8  6  is available

#include<stdio.h>

void read_data(FILE *ptr,int d[], int *size, int k)  //integers into an array that is created with the first integer telling you how many to read.
{
	*size = 0;
	int i=0;
	for(i=0;i<k;i++)
	{
		fscanf(ptr, "%d", &d[*size]);
		(*size)++;
	}
}

void print_data(int d[], int size) //for printing collected data
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",d[i]);
	}
}

double average(int d[], int size)  // for finding average no of array
{
	int i;
	double avg=0.0;
	for(i=0;i<size;i++)
	{
		avg +=d[i];
	}
	return (avg/size);
}

double max(int d[], int n)  //for finding max no of array
{
	int i;
	for (i=1; i < n; ++i)
	{
    	if (d[0] < d[i]) 
    	{
      	d[0] = d[i];
    	}
    }
    return d[0];
}

int main()    //main program starts here
{
	FILE *ifp, *ifn;   //1 for reading,other for righting
	int sz,i,k;
	

	ifp=fopen("array.txt","r");  //file opens here withe read permission
	fscanf(ifp,"%d", &k);  //scan first int and and store in adress og k
	int data[k];  // making a array of K size
	read_data(ifp, data, &sz, k);  //for reading data from file (according to first no)
	print_data(data,sz);       //for data printing
	printf("\naverage score is %10f",average(data,sz)); //finding average by function calling
	printf("\nmax no of array is %lf",max(data,sz));  //finding max no from array by function calling
	fclose(ifp); //file closing
	ifn=fopen("answer-hw3.txt","w");  //new file opening with write permission
	fprintf(ifn, "average score is %lf",average(data,sz));  //writing a data of avg in to new file
	fprintf(ifn, "\nmax no of array is %lf",max(data,sz));  //writing data of max no in new file
	fclose(ifn);  //new file closed

    
  
   return 0;
}
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
