#pragma once

#include "furniture.h"

using namespace std;

class Table : public Furniture
{
public:
	Table(string name, float price);

	float calculatePrice(int quantity);

private:

};

