#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void HeadsOrTails(char* decisionString){
   //rand() % (max_number + 1 - minimum_number) + minimum_number
   //restrict output to 1 or 2
   int decisionNum = rand() % (2 + 1 - 1) + 1;
   
   //change num to string
   if(num = 1)
      decisionString = "heads";
   else
      decisionString = "tails";
}

int main(void) {
   //declair
   int numRuns;
   char decisionString;
   
   //userinput
   scanf("%d", &numRuns);
   srand(2);  /* Unique seed */
   
   //flip the coin
   HeadsOrTails(&decisionString);
   printf("%c\n", decisionString);
   
   
   return 0;
}
