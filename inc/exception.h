#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <stdexcept>
using std::runtime_error;

class missing_item: public runtime_error
{
public:
	missing_item(std::basic_string<char>);
};

class missing_parent: public runtime_error
{
public:
	missing_parent(std::basic_string<char>);
};

#endif
