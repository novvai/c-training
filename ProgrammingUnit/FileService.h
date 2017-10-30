#pragma once

#include "string"
#include "fstream"
#include "vector"

class FileService
{
private:
	std::fstream file;
	const std::string defaultFilePath = "bin\\";
	const char* defaultSeparator = "\tab";
	std::string fileName;
public:
	FileService(const char* name);
	~FileService();
	void write(const char* line);
	void read();
private:
	void openFile();
	void closeFile();
	void checkExistance();

};

