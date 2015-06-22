#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <iomanip>
using namespace std;
#include "Pizza.h"
class DeluxePizza:public Pizza{
	char *name;
public:
	DeluxePizza();
	DeluxePizza(double d,const char *nam);
	DeluxePizza(DeluxePizza&);
	void display(ostream &) const;
	DeluxePizza& operator = (const Pizza&);
	~DeluxePizza();
	friend ostream& operator << (ostream&, const DeluxePizza&);
};
	
