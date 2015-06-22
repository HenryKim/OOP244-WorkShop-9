#include <iostream>
#include <cstring>  
#include "Pizza.h"  
using namespace std;

Pizza::Pizza()
{
   diameter = 0.0;
   total=left = eaten = 0;  
}
Pizza::Pizza(double temp)
{ 
   diameter = 0;   
 
   if(temp > 0){
     diameter = temp;
     eaten = 0;
   }
   else{
     *this = Pizza();
   }
}
void Pizza::slice(int temp)
{
   if(temp > 0){
      left = total = temp ;   
   }else{
      left = 0;
   }
}
void Pizza::eat()
{
   eaten+=1;
   left-=1;
}
void Pizza::display(ostream& os) const
{
   os << diameter << "'' " << left << " slices " << eaten << " eaten ";  
}
ostream& operator<<(ostream& os, const Pizza& temp)
{
   temp.display(os);  
   return os;
}


int Pizza::returnleft(){
	return left;
}

int Pizza::returneaten(){
	return eaten;
}

int Pizza::returntotal(){
	return total;
}

double Pizza::returndia(){
	return diameter;
}