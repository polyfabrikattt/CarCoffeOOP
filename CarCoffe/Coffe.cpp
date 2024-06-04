#include "Coffe.h"
string Coffe::getInfo() {
	return "Coffe brand: " + brand+ "; model: " + model+ "; age: " + to_string(age)+ "; price: " + to_string(price);
}
string Coffe::getBrand() {
	return brand;
}
string Coffe::getModel() {
	return model;
}
void Coffe::setAge(int NumAge) {
	if (age > 0) {
		this->age = age;
	}
}
int Coffe::getAge() {
	return age;
}
void Coffe::setPrice(int NumPrice) {
	if (price > 0) {
		this->price = price;
	}
}
int Coffe::getPrice() {
	return price;
}