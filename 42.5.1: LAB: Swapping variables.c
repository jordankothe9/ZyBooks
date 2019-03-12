#include <stdio.h>

void SwapValues(int* userVal1, int* userVal2){
   int temp = *userVal1;
   *userVal1 = *userVal2;
   *userVal2 = temp;
}

int main(void) {

   int num1;
   int num2;
   scanf("%d", &num1);
   scanf("%d", &num2);
   
   SwapValues(&num1, &num2);
   
   printf("%d %d\n", num1, num2);

   return 0;
}
