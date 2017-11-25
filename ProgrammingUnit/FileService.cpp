#include "stdafx.h"
#include "fileservice.h"
#include "customexceptions.h"
#include "logger.h"

#include "iostream"

/*
 * Build file and check for existence 
 */
FileService::FileService(const char* file) {
	// build the fileName
	fileName = this->defaultFilePath + file;
	
	// check if exists
	try
	{
		checkExistance();
	}
	catch (const NotFoundException& e)
	{
		// if does not exist log Error
		Logger log;
		std::cout << e.message;
		log.error(e.message);
	}
};

FileService::~FileService() {
	closeFile();
};

/*
 * Open file in read and append mode
 */
void FileService::openFile() {
	file.open(this->fileName.c_str(), std::fstream::in | std::fstream::app);
}
/*
* Close file to free space into the memory (prevents memory leak)
*/
void FileService::closeFile() {
	file.close();
}
/*
 * Throw NotFoundException if does not exist
 */
void FileService::checkExistance() {
	file.open(this->fileName.c_str(), std::fstream::in);
	if (!file.is_open())
	{
		throw NotFoundException("File that you have specified does not exists");
	}
	closeFile();
}