// ProgrammingUnit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fileservice.h"



int main()
{
	FileService* reserve = new FileService("zaqvki.txt");

	reserve->read();
	
	return 0;
}

