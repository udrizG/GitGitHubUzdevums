#include <iostream>
#include "Name.h"
using namespace std;

class PaulsGustavs: public Name
{
	public:
		PaulsGustavs();
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
