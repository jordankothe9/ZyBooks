#include <iostream>
#include <vector>
using namespace std;

//search function
string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName){
   for(int i = 0; i < nameVec.size(); i++){
      if(nameVec.at(i) == contactName)
         return phoneNumberVec.at(i);
   }
   return "not found";
}

int main() {
   //initalize vars
   vector<string> nameVec;
   vector<string> phoneNumberVec;
   int length
   string contactName;
   
   //get user data starting with number of entries followed by name, phone, name, phone etc
   scanf("%d", &length);
   for(int i = 0; i < length; i++){
      scanf("%s %s", &nameVec.at(i), &phoneNumberVec.at(i);
   }
   
   //call search function and print phone number
   scanf("%s", contactName);
   printf(GetPhoneNumber(contactName));

   return 0;
}
