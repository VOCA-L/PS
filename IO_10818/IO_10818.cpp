#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> list;
	int temp;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		list.push_back(temp);
	}

	int min, max;
	min = *min_element(list.begin(), list.end());
	max = *max_element(list.begin(), list.end());

	cout << min << " " << max;
}