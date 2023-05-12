#include <iostream>
#include <vector>

#define mod 10007

using namespace std;

int mem[1001][10] = { 0, };

int main() {

	int N;
	cin >> N;

	for (int i = 0; i < 10; i++) {
		mem[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = j; k <= 9; k++) {
				mem[i][j] = (mem[i - 1][k] + mem[i][j]) % mod;
			}
		}
	}
	
	int result = 0;
	for (int i = 0; i < 10; i++) {
		result = (result + mem[N][i]) % mod;
	}
	cout << result << "\n";
}
