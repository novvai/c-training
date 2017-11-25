#pragma once

#include "fileservice.h"

class SingleLineReader : public FileService
{
public:
	SingleLineReader(const char* file);
	void read();
	void write(const char* line);
};
