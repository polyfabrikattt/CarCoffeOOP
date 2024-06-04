#pragma once
#include "Coffe.h"
class DeallerCoffe {
double getMaxPrice(Coffe* list, int length);
double getMinPrice(Coffe* list, int length);
double AveragePrice(Coffe* list, int length);
Coffe getCheapestCoffe(Coffe* list, int length);
Coffe getMostExpenciveCoffe(Coffe* list, int length);
};