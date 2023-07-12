#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	int  piece = 0;
	stack<char> st;
	char before = '(';
	int cnt = 0;

	for (int j = 0; j < s.length(); j++) {
		if (s[j] == '(') {
			st.push(s[j]);
			piece += 1;
			before = '(';
		}
		else if (s[j] == ')') {
			if (before == ')') {
				st.pop();
			}
			else {
				st.pop();
				piece -= 1;
				piece = piece + st.size();
			}
			before = ')';
		}
	}
	std::cout << piece;
	return 0;
}