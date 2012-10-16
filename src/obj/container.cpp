#include <cstdio>
#include <string>
#include <algorithm>
#include <my_exceptions.h>
#include <obj/container.h>

using std::printf;
using std::string;
using ::tolower;
using std::transform;

container::container(container* parent): item(parent)
{}

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

	throw(missing_item("Object '" + get_name() + "' has no item '" + query.get_name() + ".'"));
}

int container::find_item(string query)
{
	string query_lower, check_lower;
	int size = contents.size();

	transform(query.begin(), query.end(), query_lower.begin(), tolower);

	for (int loc = 0; loc < size; loc++) {
		check_lower = contents[loc]->get_name();
		transform(check_lower.begin(), check_lower.end(), check_lower.begin(), tolower);

		if (query_lower.compare(check_lower)) {
			return loc;
		}
	}

	throw(missing_item("Object '" + get_name() + "' has no item '" + query + ".'"));
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
			printf("\tParent:\t\t%s\n\n", contents[loc]->get_parent().get_name().c_str());
		}
	} else {
		printf("%s is empty.\n\n", get_name().c_str());
	}
}
