#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>

struct exception
{
	std::string message;
	exception(std::string);
};

struct item_missing_exception: exception
{
	std::string item_name;
	item_missing_exception(std::string, std::string);
};

#endif