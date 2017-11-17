#pragma once

#include "furniture.h"

using namespace std;

class Table : public Furniture
{
public:
	Table(string name, float price);

	int calculatePrice(int quantity);

private:

};

