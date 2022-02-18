<<<<<<< HEAD
<<<<<<< HEAD
# include <stdio.h>
# include <string.h>
 
int main( )
{
 
    // Declare the file pointer
    FILE *filePointer ;
     
    // Declare the variable for the data to be read from file
    char dataToBeRead[50];
 
    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("abc.txt", "r") ;
     
    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
         
        // Read the dataToBeRead from the file
        // using fgets() method
        fgets ( dataToBeRead, 50, filePointer );
    
        printf( "%s" , dataToBeRead ) ;
         
        // Closing the file using fclose()
        fclose(filePointer) ;
         
        printf("\nData successfully read from file GfgTest.c\n");
        printf("The file is now closed.") ;
    }
    return 0;       
=======
# include <stdio.h>
# include <string.h>
 
int main( )
{
 
    // Declare the file pointer
    FILE *filePointer ;
     
    // Declare the variable for the data to be read from file
    char dataToBeRead[50];
 
    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("abc.txt", "r") ;
     
    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
         
        // Read the dataToBeRead from the file
        // using fgets() method
        fgets ( dataToBeRead, 50, filePointer );
    
        printf( "%s" , dataToBeRead ) ;
         
        // Closing the file using fclose()
        fclose(filePointer) ;
         
        printf("\nData successfully read from file GfgTest.c\n");
        printf("The file is now closed.") ;
    }
    return 0;       
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
=======
# include <stdio.h>
# include <string.h>
 
int main( )
{
 
    // Declare the file pointer
    FILE *filePointer ;
     
    // Declare the variable for the data to be read from file
    char dataToBeRead[50];
 
    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("abc.txt", "r") ;
     
    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
         
        // Read the dataToBeRead from the file
        // using fgets() method
        fgets ( dataToBeRead, 50, filePointer );
    
        printf( "%s" , dataToBeRead ) ;
         
        // Closing the file using fclose()
        fclose(filePointer) ;
         
        printf("\nData successfully read from file GfgTest.c\n");
        printf("The file is now closed.") ;
    }
    return 0;       
>>>>>>> 4f7c3faeee409ab96b5443a266815bf8e54bc422
}