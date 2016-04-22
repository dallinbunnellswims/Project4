#include "stdafx.h"
#include "MyVector.h"


MyVector::MyVector()
{
	size = 0;
	capacity = INITIAL_CAPACITY;
	vectorData = new int[capacity];
}

MyVector::MyVector(int n)
{
	size = 0;
	capacity = n;
	vectorData = new int[capacity];
}

int MyVector::Size()
{
	return size;
}

int MyVector::Capacity()
{
	return capacity;
}

void MyVector::clear()
{
	delete[] vectorData;
	size = 0;
	capacity = INITIAL_CAPACITY;
	vectorData = new int[capacity];
}

void MyVector::push_back(int n)
{
	if (size == capacity)
	{
		capacity = capacity*INITIAL_CAPACITY;
		int* newVectorData = new int[capacity];
		for (int i = 0; i < size; i++)
			newVectorData[i] = vectorData[i];
		delete vectorData;
		vectorData = newVectorData;
	}
	vectorData[size] = n;
	size++;
}


MyVector::~MyVector()
{
	delete[] vectorData;
}
