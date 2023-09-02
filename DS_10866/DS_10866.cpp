#include <iostream>
#include <string>
#include <deque>


int main() {
	int N;
	std::cin >> N;

	std::deque<int> int_dq;

	for (int i = 0; i < N; i++) {
		std::string command;
		std::cin >> command;
		
		if (command == "push_front") {
			int temp;
			std::cin >> temp;
			int_dq.push_front(temp);
		}
		else if (command == "push_back") {
			int temp;
			std::cin >> temp;
			int_dq.push_back(temp);
		}
		else if (command == "size") {
			std::cout << int_dq.size() << "\n";
		}
		else if (command == "empty") {
			int_dq.empty() ? std::cout << 1 : std::cout << 0;
			std::cout << "\n";
		}
		else {
			if (!int_dq.empty()) {
				if (command == "pop_front") {
					std::cout << int_dq.front() << "\n";
					int_dq.pop_front();
				}
				else if (command == "pop_back") {
					std::cout << int_dq.back() << "\n";
					int_dq.pop_back();
				}
				else if (command == "front") {
					std::cout << int_dq.front() << "\n";
				}
				else if (command == "back") {
					std::cout << int_dq.back() << "\n";
				}
			}
			else {
				printf("%d\n", -1);
			}
		}

	}
	return 0;
}