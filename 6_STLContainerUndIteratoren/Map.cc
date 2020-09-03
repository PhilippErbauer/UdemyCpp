#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <utility>
#include <map>

void print_map(std::map<std::string, int> &map)
{
	for (const auto &val : map)
	{
		std::cout << val.first << " " << val.second << std::endl;
	}
}

int main()
{
	std::map<std::string, int> my_map1;

	my_map1["Jan"] = 25;
	my_map1["Dennis"] = 27;
	my_map1["Jan"] = 26;

	print_map(my_map1);

	auto it = my_map1.find("Jann");
	bool is_in = it != my_map1.end();
	std::cout << "Liegt Jan im Datensatz vor? " << is_in << std::endl;

	return 0;
}