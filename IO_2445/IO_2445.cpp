#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < 2 * N - 1; i++) {
		if (i < N) {
			int star = i + 1;
			int space = 2 * (N - i - 1);
			for (int j = 0; j < star; j++) {
				cout << "*";
			}
			for (int j = 0; j < space; j++) {
				cout << " ";
			}
			for (int j = 0; j < star; j++) {
				cout << "*";
			}
		}
		else {
			int star = N - (i - N + 1);
			int space = 2 * (i - N + 1);

			for (int j = 0; j < star; j++) {
				cout << "*";
			}
			for (int j = 0; j < space; j++) {
				cout << " ";
			}
			for (int j = 0; j < star; j++) {
				cout << "*";
			}
		}
		cout << "\n";
	}
}