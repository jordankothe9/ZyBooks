#include <iostream>
using namespace std;

//swap method
void SwapValues(int& userVal1, int& userVal2){
   int temp;
   temp = userVal1;
   userVal1 = userVal2;
   userVal2 = temp;
}

int main() {
  //declear and populate numbers to be swapped
  int num1;
  int num2;
  cin >> num1;
  cin >> num2;
  
  SwapValues(num1, num2);
  
  cout << num1 << " " << num2 << endl;
  

   return 0;
}
