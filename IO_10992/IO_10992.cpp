#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int star = 0;
		int space = 0;

		if (i == N - 1) {
			for (int j = 0; j < 2 * N - 1; j++) {
				cout << "*";
			}
		}
		else {
			for (int j = 0; j < abs(i + 1 - N); j++) {
				cout << " ";
			}
			cout << "*";
			if (i != 0) {
				for (int j = 0; j < 2 * i - 1; j++) {
					cout << " ";
				}
				cout << "*";
			}
		}
		cout << "\n";
	}
}