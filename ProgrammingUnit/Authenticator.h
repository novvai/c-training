#pragma once

#include "string"
#include "fileservice.h"

class Authenticator
{
private:
	int hashedPassword;
	FileService *passwordDriver;

public:
	Authenticator(FileService* driver);
};