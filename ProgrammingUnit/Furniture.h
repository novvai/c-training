#pragma once

#include "string"

using namespace std;

class Furniture
{
protected:
	string name;
	float basePrice;
public:
	virtual int calculatePrice(int quantity) = 0;
protected:
	void setName(string name);
	void setBasePrice(float pr);

};
