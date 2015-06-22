#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <iomanip>
using namespace std;
#include "DeluxePizza.h"
DeluxePizza::DeluxePizza():Pizza(){
	if (name !=NULL) {
		delete [] name;
	}
	name= NULL;
}
DeluxePizza::DeluxePizza(double d,const char *nam):Pizza(d){
	if(name !=NULL) {
	delete [] name;
	}
	name = new char [ strlen(nam)+1];
	strcpy( name , nam);
}
DeluxePizza::~DeluxePizza(){
	if (name != NULL){
		delete [] name;
		
	}
}
ostream& operator<<(ostream& os, const DeluxePizza & str){
	str.display(os);
	return os;
}

void DeluxePizza::display(ostream& os) const{
	if(name != NULL){
	Pizza::display(os);
	os<<name;
	}
	else{
		cout<<"ERROR Data is not avaliable";
	}
}
DeluxePizza& DeluxePizza::operator=(const Pizza& str) {
	Pizza temp=str;
	if(name !=NULL) {
		delete [] name;
	}
	name = new char [20];
	strcpy(name,"no added toppings");
	if(this != &temp){
		diameter = temp.returndia();
		eaten = temp.returneaten();
		total = temp.returntotal();
		left = temp.returnleft();

	}
	return *this;
}