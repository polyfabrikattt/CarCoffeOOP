#pragma once
#include "Coffe.h"
#include "Car.h"
class VarietyOfCoffe
{
private:
	Coffe* Variety;
	int size{ 0 };
public:
	VarietyOfCoffe() : size(0) {}
	void add(Coffe coffe);
	void remove(int ind);
	void remove(Coffe coffe);
	int getFirstIndex(Coffe coffe);
	int getLastIndex(Coffe coffe);
	int getSize();
	Coffe get(int ind);
	string convertToString();
};
