#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <vector>

class event
{
	std::vector<std::string> triggers;
public:
	event(std::string, ...);
	int find_trigger(std::string);
	virtual int run();
};

#endif