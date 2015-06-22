#include <iostream>
using namespace std;

class Pizza{

    protected:          
      double diameter;
      int left, total, eaten;   

    public:
      Pizza();
      Pizza(double);        
      void slice(int);
      void eat();
      virtual void display(ostream&) const;
		int returnleft();
		int returntotal();
		int returneaten();
		double returndia();
};
      ostream& operator<<(ostream&, const Pizza&);
