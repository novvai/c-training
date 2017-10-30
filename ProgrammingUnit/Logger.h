#pragma once

#include "string"
#include "fstream"
#include "ctime"

class Logger
{
private:
	/*
	 * Opened file in append mode to add further information
	 */
	std::fstream driver;
	
	/*
	 * the path to the Logger file
	 */
	std::string fileName;
public:
	// Constructor
	Logger(std::string fileName = "storage\\log.txt");
	// Destructor
	~Logger();
	
	/*
	 * Logs the given message to ..\storage\log.txt file 
	 *
	 * @param const char* message
	 */
	void error(const char* message);

private:
	/*
	 * Load the specified file
	 */
	void loadFile();
};
