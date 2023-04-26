#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < 2 * N - 1; i++) {
		int star = 0;
		int space = 0;

		if (i < N) {
			star = 2 * (N - i - 1) + 1;
			space = i;
		}
		else {
			star = 2 * (i - N + 1) + 1;
			space = N - (i - N + 2);
		}

		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		for (int j = 0; j < star; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}