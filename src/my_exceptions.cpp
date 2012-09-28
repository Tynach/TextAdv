#include <my_exceptions.h>
using std::basic_string;

missing_item::missing_item(basic_string<char> what_arg): runtime_error(what_arg)
{}

missing_parent::missing_parent(basic_string<char> what_arg): runtime_error(what_arg)
{}
