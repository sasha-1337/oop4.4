#pragma once
#include "Container.h"
class Choice : public Container
{
public:
	Choice() { }
	Choice(int n) : Container(n) { }

	virtual void Print(const Choice& a);
	virtual void Read(Choice& a);
	virtual void sort();
	virtual void foreach();
	virtual double foreach1(int);
};

