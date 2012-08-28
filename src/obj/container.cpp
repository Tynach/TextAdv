#include <iostream>
#include <obj/container.h>

using namespace std;

container::container(container& parent): item(parent)
{}

int container::find_item(item& query)
{
	int size = contents.size();
	for (int loc = 0; loc < size; loc++) {
		if (contents[loc] == &query) {
			return loc;
		}
	}

	return -1;
}

int container::add_item(item& query)
{
	contents.push_back(&query);
	return 0;
}

int container::remove_item(item& query)
{
	int loc = find_item(query);

	if (loc < 0) {
		return loc;
	}

	contents.erase(contents.begin() + loc);
	return 0;
}

void container::list_contents()
{
	int size = contents.size();

	if (size > 0) {
		if (size == 1) {
			cout << get_name() << " contains " << size << " object:\n";
		} else {
			cout << get_name() << " contains " << size << " objects:\n";
		}
		for (int loc = 0; loc < size; loc++) {
			cout << "\tItem:\t\t" << contents[loc]->get_name() << endl;
			cout << "\tDescription: \t" << contents[loc]->get_desc() << endl;
			cout << "\tParent:\t\t" << contents[loc]->get_parent_name() << endl;
			cout << endl;
		}
	} else {
		cout << get_name() << " is empty.\n";
	}
}