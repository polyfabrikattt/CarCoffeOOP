
#pragma once
#include "Coffe.h"
class Car : 
public Coffe
{
private:
	double Lift;
	double volume;
public:
	Car() {};
	Car(string brand, string model, int age,
		double price, double Lift, double Volume) :
		 Car(brand, model, age, price) , Lift(Lift), volume(volume) {};
	~Car() {};
	double Lift();
	double Volume();
};