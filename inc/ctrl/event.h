#ifndef EVENT_H
#define EVENT_H

#include <string>

class event
{
	std::string actions[];
public:
	event(...);

	int run();
};

#endif