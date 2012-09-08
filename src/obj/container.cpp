#include <cstdio>
#include <exception.h>
#include <obj/container.h>

container::container(container* parent): item(parent)
{}

int container::find_item(item& query)
{
	int size = contents.size();
	for (int loc = 0; loc < size; loc++) {
		if (contents[loc] == &query) {
			return loc;
		}
	}

	throw(item_missing_exception("Could not find item.", query.get_name()));
}

void container::add_item(item& query)
{
	contents.push_back(&query);
}

void container::remove_item(item& query)
{
	int loc = find_item(query);
	contents.erase(contents.begin() + loc);
}

void container::list_contents()
{
	int size = contents.size();

	if (size > 0) {
		if (size == 1) {
			printf("%s contains %d object:\n", get_name().c_str(), size);
		} else {
			printf("%s contains %d objects:\n", get_name().c_str(), size);
		}
		for (int loc = 0; loc < size; loc++) {
			printf("\tItem:\t\t%s\n", contents[loc]->get_name().c_str());
			printf("\tDescription:\t%s\n", contents[loc]->get_desc().c_str());
			printf("\tParent:\t\t%s\n\n", contents[loc]->get_parent_name().c_str());
		}
	} else {
		printf("%s is empty.\n\n", get_name().c_str());
	}
}