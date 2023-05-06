#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	int mem[12] = { 0, };
	mem[1] = 1;
	mem[2] = 2;
	mem[3] = 4;

	for (int i = 0; i < N; i++) {
		int M;
		cin >> M;

		for (int j = 4; j <= M; j++) {
			mem[j] = mem[j - 1] + mem[j - 2] + mem[j - 3];
		}
		cout << mem[M] << "\n";
	}
}