#include "stdafx.h"
#include "logger.h"

/*
 * Constructor
 * Through initialization set the file name and load the file
 */
Logger::Logger(std::string fileName) {
	Logger::fileName = fileName;
	loadFile();
}
/*
 * Destructor
 * Free the space from memory for the opened file
 */
Logger::~Logger() {
	driver.close();
}

/*
 * Open the specified file in APPEND mode
 */
void Logger::loadFile() {
	driver.open(fileName.c_str(), std::fstream::app);
};

/*
 * Log the message in error mode to the file
 * Message can be basic string or message from thrown Exception
 */
void Logger::error(const char* message) {
	driver << "[ERROR] : " << time(0) <<' '<< message << std::endl;
}