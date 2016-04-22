#pragma once
const int INITIAL_CAPACITY = 2;

class MyVector
{
private:
	int size;
	int capacity;
	int* vectorData;
public:
	MyVector();
	MyVector(int n);
	int Size();
	int Capacity();
	void clear();
	void push_back(int n);
	int at(int n);
	~MyVector();
};

