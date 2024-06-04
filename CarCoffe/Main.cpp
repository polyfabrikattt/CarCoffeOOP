#include "VarietyOfCoffe.h"

int main() {
	VarietyOfCoffe variety;
	Car car1("Lada", "Vesta", 12,52000,42,13);
	Car car2("Mercedes", "C550", 5, 21923,55,12);
	Car car3("Lada", "Vesta", 11, 51672, 12, 20);
	variety.add(car1);
	variety.add(car2);
	cout  << variety.getSize() ;
	cout << variety.convertToString();
	variety.add(car3);
	cout  << variety.getSize();
	cout << variety.convertToString();
	variety.remove(car2);
	cout  << variety.getSize();
	cout << variety.convertToString();
	Car CarS = car1 + car2;
	bool Odinakovie = (car1 == car3);
	cout  << CarS.getInfo() ;
	cout << "2 cars is same? " << (Odinakovie ? "yes" : "no");
}