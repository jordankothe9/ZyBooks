#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void HeadsOrTails(char* decisionString){
   //rand() % (max_number + 1 - minimum_number) + minimum_number
   double decisionNum = rand() % (2 + 1 - 1) + 1;
   
   //printf("%lf", decisionNum);
   
   if(decisionNum == 1)
      *decisionString = "heads";
   else
      *decisionString = "tails";
}

int main(void) {
   int numRuns;
   char decisionString[5] = "tests";
   printf("%s\n", decisionString);
   scanf("%d", &numRuns);
   srand(2);  /* Unique seed */
   
   HeadsOrTails(&decisionString);
   printf("%s\n", decisionString);
   
   
   return 0;
}
