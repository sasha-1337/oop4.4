#pragma once
#include "Container.h"
class Bubble : public Container
{
public:
	Bubble() { }
	Bubble(int n) : Container(n) { }
	virtual void Print(const Bubble& a);
	virtual void Read(Bubble& a);
	virtual void sort();
	virtual void foreach();
	virtual double foreach1(int);
};

