#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		bool broken = false;
		stack<char> st;

		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(') {
				st.push(s[j]);
			}
			else if (s[j] == ')') {
				if (st.empty()) {
					broken = true;
					break;
				}
				else {
					st.pop();
				}
			}
		}

		if (!st.empty() || broken) {
			cout << "NO" << "\n";
		}
		else {
			cout << "YES" << "\n";
		}
	}


	return 0;
}