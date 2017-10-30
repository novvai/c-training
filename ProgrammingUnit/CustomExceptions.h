#pragma once
#include "exception"

class NotFoundException : public std::exception
{
public:
	const char* message;

public:
	// Constructor
	NotFoundException(const char* message);
	// Destructor
	~NotFoundException();
};
