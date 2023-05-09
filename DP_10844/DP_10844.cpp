#include <iostream>
#include <vector>

#define mod 1000000000

using namespace std;

int main() {
	int mem[101][10] = { 0, };

	int N;
	cin >> N;

	for (int i = 1; i < 10; i++) {
		mem[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) {
				mem[i][j] = mem[i - 1][j + 1];
			}
			else if (j == 9) {
				mem[i][j] = mem[i - 1][j - 1];
			}
			else {
				mem[i][j] = mem[i - 1][j - 1] + mem[i - 1][j + 1];
			}

			mem[i][j] %= mod;
		}
	}

	int result = 0;
	for (int i = 0; i < 10; i++) {
		result = (result + mem[N][i]) % mod;
	}

	cout << result << "\n";
}
