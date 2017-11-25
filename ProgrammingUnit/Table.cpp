#include "stdafx.h"
#include "table.h"


Table::Table(string name, float price) {
	setBasePrice(price);
	setName(name);
}
float Table::calculatePrice(int quantity = 1) {
	return basePrice * quantity;
}