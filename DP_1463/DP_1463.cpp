#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> mem(N + 1, 0);
	mem[2] = 1;
	mem[3] = 1;

	for (int i = 4; i <= N; i++) {
		mem[i] = mem[i - 1] + 1;
		if (i % 2 == 0) {
			mem[i] = min(mem[i], mem[i / 2] + 1);
		}
		if (i % 3 == 0) {
			mem[i] = min(mem[i], mem[i / 3] + 1);
		}
	}

	cout << mem[N];
}