#include <iostream>

using namespace std;

long long mem[91] = { 0, };

int main() {

	int N;
	cin >> N;

	mem[1] = 1;
	mem[2] = 1;

	for (int i = 3; i <= N; i++) {
		mem[i] = mem[i - 1] + mem[i - 2];
	}

	cout << mem[N] << "\n";
}
