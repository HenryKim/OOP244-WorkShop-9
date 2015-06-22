 // Workshop 9 - Pizza
 // w9x.cpp

 #include <iostream>
 using namespace std;
 #include "DeluxePizza.h"

 int main() {
     DeluxePizza a(14, "mush., g.p.");
     Pizza b(18);

     a.slice(8);
     b.slice(6);
     for(int i = 0; i < 4; i++)
         a.eat();
     b.eat();
     cout << a << endl;
     cout << b << endl;
     a = b;
     a.eat();
     cout << a << endl;
 }