#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	char c;
	int answer = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> c;
		answer += c - '0';
	}
	cout << answer;

	return 0;
}