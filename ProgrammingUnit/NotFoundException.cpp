
#include "stdafx.h"
#include "customexceptions.h"

/*
 * Set the message from the constructor of the exception class
 */
NotFoundException::NotFoundException(const char* message)
{
	this->message = message;
}

NotFoundException::~NotFoundException()
{
}