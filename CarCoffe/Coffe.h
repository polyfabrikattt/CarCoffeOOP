#pragma once
#include <iostream>
#include <string>

using namespace std;

class Coffe {
private:
	string brand;
	string model;
	int age;
	double price;
public:
	Coffe(string brand, string model, int age, double price) :
		brand(brand), model(model), age(age), price(price) {}
	Coffe() : Coffe("-", "-", 0, 0) {}

	string getInfo();

	string getBrand();
	string getModel();
	void setAge(int NumAge);
	int getAge();
	void setPrice(int NumPrice);
	int getPrice();

	Coffe operator+(Coffe& car2) {
		Coffe res(brand + "-" + car2.getBrand(), model + "-" + car2.getModel(),
			age, price + car2.getPrice());
		return res;
	}
	bool operator==(Coffe& car2) {
		return brand == car2.getBrand() && model == car2.getModel();
	}

	~Coffe() {};
};