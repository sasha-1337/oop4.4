#pragma once
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fcntl.h>

using namespace std;

class Container
{
	int size;
	double* arr;
public:
	Container(int n = 0)
		: size(n)
	{
		arr = new double[size];
		for (int i = 0; i < size; i++)
			arr[i] = 0;
	}
	~Container()
	{
		delete[] arr;
	}

	int GetSize() const { return size; }
	double* GetArr() { return arr; }

	Container& operator = (const Container& a);
	double& operator [] (const int i);
	const double& operator [] (const int i) const;

	virtual void sort() = 0;
	virtual void foreach() = 0;
	virtual double foreach1(int) = 0;
	virtual void Print(const Container& a) {};
	virtual void Read(Container& a) {};
};

