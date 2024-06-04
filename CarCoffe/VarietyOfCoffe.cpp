#include "VarietyOfCoffe.h"

void VarietyOfCoffe::add(Coffe coffe) {
	if (size == 0) {
		Variety = new Coffe[1];
		Variety[0] = coffe;
	}
	else {
		Coffe* temp = new Coffe[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = Variety[i];
		}
		temp[size] = coffe;
		delete[] Variety;
		Variety = temp;
	}
	size++;
}
void VarietyOfCoffe::remove(int ind) {
	if (size > 0 && ind >= 0 && ind < size) {
		Coffe* qw = new Coffe[size - 1];
		for (int i = 0, j = 0; i < size; i++) {
			if (i != ind) {
				qw[j++] = Variety[i];
			}
		}
		delete[] Variety;
		Variety = qw;
	}
}
void VarietyOfCoffe::remove(Coffe coffe) {
	int index = getFirstIndex(coffe);

	if (index != -1) {
		Coffe* qw = new Coffe[size - 1];
		for (int i = 0, j = 0; i < size; i++) {
			if (i != index) {
				qw[j++] = Variety[i];
			}
		}
		size--;
		delete[] Variety;
		Variety = qw;
	}

}

int VarietyOfCoffe::getFirstIndex(Coffe coffe) {
	for (int i = 0; i < size; i++) {
		if (coffe.getBrand() == Variety[i].getBrand()
			&& coffe.getModel() == Variety[i].getModel()
			&& coffe.getAge() == Variety[i].getAge()
			&& coffe.getPrice() == Variety[i].getPrice()) {
			return i;
		}
	}
	return -1;
}
int VarietyOfCoffe::getLastIndex(Coffe coffe) {
	for (int i = size - 1; i >= 0; i++) {
		if (coffe.getBrand() == Variety[i].getBrand()
			&& coffe.getModel() == Variety[i].getModel()
			&& coffe.getAge() == Variety[i].getAge()
			&& coffe.getPrice() == Variety[i].getPrice()) {
			return i;
		}
	}
	return -1;
}

int VarietyOfCoffe::getSize() {
	return size;
}

Coffe VarietyOfCoffe::get(int index) {
	if (index >= 0 && index < size) {
		return Variety[index];
	}
	return Coffe();
}

string VarietyOfCoffe::convertToString() {
	string s = "Variety";
	for (int i = 0; i < size; i++) {
		s += Variety[i].getInfo();
	}
	return s;
}