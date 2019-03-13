#include <iostream>
#include <vector> 
#include <string>
using namespace std;

int GetFrequencyOfWord(vector<string> wordsList, string currWord){
   int size = wordsList.size();
   //keep track of occurances of word
   int count = 0;
   
   //search through vector for matches adding to count for each match
   for(int i = 0; i < size; i++){
      if(currWord == wordsList.at(i))
         count++;
   }
   
   return count;
}



int main() {
   vector<string> wordsList;
   vector<int> counts;
   int size;
   
   //input the number of words and the words themselves
   cin >> size;
   for(int i = 0; i < size; i++){
      string recentString;
      cin >> recentString;
      wordsList.push_back(recentString);
   }
   
   //populate the count vector with the frequency of each word
   for(int i = 0; i < size; i++){
      counts.push_back(GetFrequencyOfWord(wordsList, wordsList.at(i)));
   }
   
   //output the results
   for(int i = 0; i < size; i++){
      cout << wordsList.at(i) << " " << counts.at(i) << endl;
   }

   return 0;
}
