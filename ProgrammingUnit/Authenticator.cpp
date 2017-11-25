#include "stdafx.h"
#include "authenticator.h"

Authenticator::Authenticator(FileService* driver) {
	passwordDriver = driver;
}
