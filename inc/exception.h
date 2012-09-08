#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>

struct exception
{
	std::string message;
	exception(std::string);
};

#endif