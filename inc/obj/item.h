#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>
#include <ctrl/event.h>

class container;

class item
{
	std::string name;
	std::string desc;
	container* parent;
	std::vector<event> events;
public:
	item();
	item(container* parent);

	int set_name(std::string);
	int set_desc(std::string);

	std::string get_name();
	std::string get_desc();
	std::string get_parent_name();

	int find_event(std::string);
	int trigger_event(int);
	int move(container*);
};

#endif