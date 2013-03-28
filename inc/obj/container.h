#ifndef ADVENTURE_CONTAINER_H
#define ADVENTURE_CONTAINER_H

#include <vector>
#include <string>
#include <obj/item.h>

class container: public item
{
	std::vector<item*> contents;

	void add_item(item&);
	void remove_item(item&);
protected:
	container(container* parent);
public:
	container(container& parent);

	int find_item(item&);
	int find_item(std::string);
	void list_contents();

	friend class item;
};

#endif
