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
   vector<string> wordsList;
   vector<int> counts;
   int size;
   
   cin >> size;
   for(int i = 0; i < size; i++){
      string recentString;
      cin >> recentString;
      wordsList.push_back(recentString);
   }
   
   for(int i = 0; i < size; i++){
      counts.push_back(GetFrequencyOfWord(wordsList, wordsList.at(i));
   }
   
   for(int i = 0; i < size; i++){
      cout << wordsList.at(i) << " " << counts.at(i) << endl;
   }

   return 0;
}
