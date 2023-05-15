#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	stack<int> st;
	string s;

	for (int i = 0; i < N; i++) {
		cin >> s;

		if (s == "push") {
			int m;
			cin >> m;
			st.push(m);
		}
		else if (s == "pop") {
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (s == "size") {
			cout << st.size() << "\n";
		}
		else if (s == "empty") {
			cout << (st.empty() ? 1 : 0) << "\n";
		}
		else if (s == "top") {
			cout << (st.empty() ? -1 : st.top()) << "\n";
		}
	}


	return 0;
}