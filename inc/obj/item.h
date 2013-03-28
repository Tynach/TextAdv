#ifndef ADVENTURE_ITEM_H
#define ADVENTURE_ITEM_H

#include <string>
#include <vector>

class container;

class item
{
	std::string name;
	std::string desc;
protected:
	container* parent;
	item(container* parent);
public:
	item(container& parent);

	void set_name(std::string);
	void set_desc(std::string);

	std::string get_name();
	std::string get_desc();
	container& get_parent();

	void move(container&);
};

#endif
