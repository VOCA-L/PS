#include <iostream>
#include <cstring>
#include <string>

int main() {
	std::string word;
	std::cin >> word;

	int alphabet[26];
	memset(alphabet, -1, sizeof(alphabet));

	// Find
	for (int i = 0; i < word.size(); i++) {
		if (alphabet[word[i] - 0x61] == -1) {
			alphabet[word[i] - 0x61] = i;
		}
	}

	// Print number of array
	for (auto& i : alphabet) {
		printf("%d ", i);
	}
}
