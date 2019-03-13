#include <iostream>
#include <vector> 
#include <string>
using namespace std;

int GetFrequencyOfWord(vector<string> wordsList, string currWord){
   int size = vector.size();
   //keep track of occurances of word
   int count = 0;
   
   //search through vector for matches adding to count for each match
   for(int i = 0; i < size; i++){
      if(currWord == vector.at(i))
         count++;
   }
   
   return count;
}



int main() {
   /* Type your code here */

   return 0;
}
