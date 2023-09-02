#include <iostream>
#include <cstring>
#include <string>

int main() {
	std::string word;

	while (std::getline(std::cin, word)) {
		int arr[4];
		memset(arr, 0, sizeof(arr));

		// Find
		for (int i = 0; i < word.size(); i++) {
			if (word[i] == ' ') {
				arr[3]++;
			}
			else if (word[i] < 0x3A) {
				arr[2]++;
			}
			else if (word[i] > 0x60) {
				arr[0]++;
			}
			else if (word[i] > 0x40) {
				arr[1]++;
			}
		}

		// Print number of array
		for (auto& i : arr) {
			printf("%d ", i);
		}
	}
}
