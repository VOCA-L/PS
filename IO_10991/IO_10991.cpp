#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < abs(i + 1 - N); j++) {
			cout << " ";
		} // 1st white space
		for (int j = 0; j < i + 1; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}