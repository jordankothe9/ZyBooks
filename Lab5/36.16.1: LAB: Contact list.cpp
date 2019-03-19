#include <iostream>
#include <vector>
using namespace std;

//search function
string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName){
   int size = nameVec.size();
   for(int i = 0; i < size; i++){
      if(nameVec.at(i) == contactName)
         return phoneNumberVec.at(i);
   }
   return "not found";
}

int main() {
   //initalize vars
   std::vector<string> nameVec;
   std::vector<string> phoneNumberVec;
   int length;
   string contactName;
   
   
   //get user data starting with number of entries followed by name, phone, name, phone etc
   scanf("%d", &length);
   for(int i = 0; i < length; i++){
      string name;
      cin >> name;
      nameVec.push_back(name);
      
      string number;
      cin >> number;
      phoneNumberVec.push_back(number);
   }
   
   //call search function and print phone number
   cin >> contactName;
   cout << GetPhoneNumber(nameVec, phoneNumberVec, contactName) << endl;

   return 0;
}
