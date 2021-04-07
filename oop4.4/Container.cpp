#include "Container.h"
Container& Container::operator = (const Container& a)
{
	if (&a == this) return *this;
	size = a.size;
	delete[] arr;
	arr = new double[size];
	for (int i = 0; i < size; i++)
		arr[i] = a.arr[i];
	return *this;
}

double& Container::operator [] (const int i)
{
	return arr[i];
}

const double& Container::operator [] (const int i) const
{
	return arr[i];
}