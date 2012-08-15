#include <iostream>
#include <container.h>

using namespace std;

int container::find_item(item* query)
{
	for (int loc = 0; loc < this->contents.size(); loc++) {
		if (this->contents.at(loc) == query) {
			return loc;
		}
	}

	return -1;
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
	cout << this->get_name() << " contains:" << endl;

	for (int loc = 0; loc < this->contents.size(); loc++) {
		cout << "\tItem:\t\t" << this->contents.at(loc)->get_name() << endl;
		cout << "\tDescription: \t" << this->contents.at(loc)->get_desc() << endl;
		cout << endl;
	}
}