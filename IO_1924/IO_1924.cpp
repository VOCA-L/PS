#include <iostream>
#include <string>

using namespace std;

int main() {
	int month, day;
	string dow[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	cin >> month >> day;

	int total_day = 0;
	for (int i = 0; i < month - 1; i++) {
		total_day += days[i];
	}
	total_day += day;
	cout << dow[total_day % 7];
	
	return 0;
}