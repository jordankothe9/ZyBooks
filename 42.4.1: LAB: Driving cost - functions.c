#include <stdio.h>

//Driving cost: miles * (gals/miles) * ( $ / gals ) = dollars

//cost per mile ($ /miles) = gals/mile.........

double DrivingCost(double drivenMiles, double mpg, double dollarsPerGallon){
   return miles * mpg * dollarsPerGallon;
}

int main(void) {


   //input: car's miles/gallon and  dollars/gallon (both doubles)
   double mpg;
   double dollarsPerGallon;
   
   cin >> mpg;
   cin >> dollarsPerGallon;
   
   //outputs should include: 10 miles, 50 miles, and 400 miles
   cout << DrivingCost(10.0, mpg, dollarsPerGallon);
   cout << DrivingCost(50.0, mpg, dollarsPerGallon);
   cout << DrivingCost(400.0, mpg, dollarsPerGallon);

   return 0;
}
