#include <iostream>
#include "Name.h"
#include "PaulsGustavs.h"

using namespace std;

PaulsGustavs::PaulsGustavs(string n)
{
	name=n;
}

void PaulsGustavs::setName(string n)
{
	name=n;
}

void PaulsGustavs::Print() const
{
	cout << name << endl;
}


