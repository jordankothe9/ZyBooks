#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
   char userStr[100];
   char* newStr = NULL;

   strcpy(userStr, "Hello friend!");

   /* Your solution goes here  */
   newStr = malloc(strlen(userStr));

   strcpy(newStr, userStr);
   printf("%s\n", newStr);

   return 0;
}
