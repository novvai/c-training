// ProgrammingUnit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fileservice.h"
#include "table.h"
#include "iostream"

int main()
{
	Table t = Table("da", 4.5);
	std::cout<<t.calculatePrice(3);
	return 0;
}

