#pragma once

#include "string"
#include "fstream"
#include "vector"

class FileService
{
protected:
	std::fstream file;
	const std::string defaultFilePath = "bin\\";
	const char* defaultSeparator = "\tab";
	std::string fileName;
public:
	FileService(const char* name);
	~FileService();
	void virtual write(const char* line) = 0;
	void virtual read() = 0;
protected:
	void openFile();
	void closeFile();
	void checkExistance();

};

