#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> mem(N + 1, 0);
	mem[1] = 1;
	mem[2] = 3;

	for (int i = 3; i <= N; i++) {
		mem[i] = (mem[i - 1] + mem[i - 2] * 2) % 10007;
	}

	cout << mem[N];
}