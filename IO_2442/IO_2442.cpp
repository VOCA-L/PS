#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - (i + 1); j++) {
			cout << " ";
		}
		int num = 2 * (i + 1) - 1;
		for (int k = 0; k < num; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}