#include "DeallerCoffe.h"
double DeallerCoffe::getMaxPrice(Coffe* list, int length) {
	double max = list[0].getPrice();
	for (int i = 1; i < length; i++) {
		if (list[i].getPrice() > max) {
			max = list[i].getPrice();
		}
	}
	return max;
}
double DeallerCoffe::getMinPrice(Coffe* list, int length) {
	double min = list[0].getPrice();
	for (int i = 1; i < length; i++) {
		if (list[i].getPrice() < min) {
			min = list[i].getPrice();
		}
	}
	return min;
}
double DeallerCoffe::AveragePrice(Coffe* list, int length) {
	double avg = 0;
	for (int i = 0; i < length; i++) {
		avg += list[i].getPrice();
	}
	return avg / length;
}
Coffe DeallerCoffe::getCheapestCoffe(Coffe* list, int length) {
	double marking = getMinPrice(list, length);
	Coffe adj;

	for (int i = 0; i < length; i++) {
		if (list[i].getPrice() == marking) {
			adj = list[i];
			break;
		}
	}
	return adj;
}
Coffe DeallerCoffe::getMostExpenciveCoffe(Coffe* list, int length) {
	double otm = getMaxPrice(list, length);
	Coffe st;

	for (int i = 0; i < length; i++) {
		if (list[i].getPrice() == otm) {
			st = list[i];
			break;
		}
	}
	return st;
}