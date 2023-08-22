#include <iostream>
#include <queue>
#include <string>


int main() {
	int N;
	std::cin >> N;

	std::queue<int> int_q;

	for (int i = 0; i < N; i++) {
		std::string command;
		std::cin >> command;

		if (command == "push") {
			int temp;
			std::cin >> temp;

			int_q.push(temp);
			continue;
		}
		else if (command == "size") {
			std::cout << int_q.size() << "\n";
			continue;
		}
		else if (command == "empty") {
			int_q.empty() ? std::cout << 1 : std::cout << 0;
			std::cout << "\n";
			continue;
		}
		else {
			if (int_q.empty()) {
				std::cout << -1 << "\n";
			}
			else {
				if (command == "pop") {
					std::cout << int_q.front() << "\n";
					int_q.pop();
				}
				else if (command == "front") {
					std::cout << int_q.front() << "\n";
				}
				else if (command == "back") {
					std::cout << int_q.back() << "\n";
				}
			}
		}
	}
	return 0;
}