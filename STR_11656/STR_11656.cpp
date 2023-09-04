#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
	std::string s;
	std::cin >> s;

	std::vector<std::string> v;
	for (int i = 0; i < s.length(); i++) {
		v.push_back(s.substr(i));
	}
	std::sort(v.begin(), v.end());

	for (auto& i : v) std::cout << i << "\n";
}