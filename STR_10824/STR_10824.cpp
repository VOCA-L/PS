#include <iostream>
#include <string>

int main() {
	std::string before;
	std::string after;

	std::cin >> before >> after;
	auto a = std::stoll(before + after);

	std::cin >> before >> after;
	auto b = std::stoll(before + after);
	
	std::cout << a + b;

	return 0;
}