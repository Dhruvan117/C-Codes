#include <stdio.h>
 
int main() {
   char *msg = "hello";  // Append a terminating null character '\0'
   char *p;
 
   for (p = msg; *p != '\0'; p++) {
      printf("'%c' ", *p);
   }
   printf("\n");
}