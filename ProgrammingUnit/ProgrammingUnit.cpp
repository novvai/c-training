// ProgrammingUnit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fileservice.h"
#include "table.h"
#include "iostream"
#include "authenticator.h"
#include "singlelinereader.h"

int main()
{
	Authenticator a = Authenticator(new SingleLineReader("zaqvki"));
	
	Table t = Table("da", 4.5);
	return 0;
}

