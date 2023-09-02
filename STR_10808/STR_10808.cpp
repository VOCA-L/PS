#include <iostream>
#include <cstring>
#include <string>

int main() {
	std::string word;
	std::cin >> word;

	int alphabet[26];
	memset(alphabet, 0, sizeof(alphabet));

	for (auto& i : word) {
		alphabet[i - 0x61]++;
	}

	for (auto& i : alphabet) {
		printf("%d ", i);
	}
}
