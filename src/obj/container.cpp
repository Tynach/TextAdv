#include <iostream>
#include <container.h>

using namespace std;

container::container()
{}

container::container(container* parent): item(parent)
{}

int container::find_item(item* query)
{
	for (int loc = 0; loc < this->contents.size(); loc++) {
		if (this->contents.at(loc) == query) {
			return loc;
		}
	}

	return -1;
}

int container::add_item(item* query)
{
	this->contents.push_back(query);
}

int container::remove_item(item* query)
{
	int loc = this->find_item(query) - 1;

	if (loc < -1) {
		return loc;
	}

	this->contents.erase(this->contents.begin() + loc);
	return 0;
}

void container::list_contents()
{
	cout << this->get_name() << " contains " << this->contents.size() << " objects:" << endl;

	for (int loc = 0; loc < this->contents.size(); loc++) {
		cout << "\tItem:\t\t" << this->contents.at(loc)->get_name() << endl;
		cout << "\tDescription: \t" << this->contents.at(loc)->get_desc() << endl;
		cout << "\tParent:\t\t" << this->contents.at(loc)->get_parent_name() << endl;
		cout << endl;
	}
}