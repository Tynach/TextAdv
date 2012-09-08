#include <string>
#include <exception.h>

exception::exception(std::string message): message(message)
{}

item_missing_exception::item_missing_exception(std::string message, std::string item_name): exception(message), item_name(item_name)
{}