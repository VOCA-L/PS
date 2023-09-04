#include <iostream>
#include <string>
#include <cstring>

int main() {
	std::string word;
	std::getline(std::cin, word);
	std::string answer = "";

	for (auto& i : word) {
		if (i >= 'A' && i <= 'Z') {
			if (i + 13 > 'Z') {
				answer += 'A' + (13 - ('Z' - i) - 1);
			}
			else {
				answer += (i + 13);
			}
		}
		else if (i >= 'a' && i <= 'z') {
			if (i + 13 > 'z') {
				answer += 'a' + (13 - ('z' - i) - 1);
			}
			else {
				answer += (i + 13);
			}
		}
		else {
			answer += i;
		}
	}

	std::cout << answer;
	return 0;
}