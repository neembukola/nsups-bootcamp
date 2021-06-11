#include <iostream>
using namespace std;

int main() {
	int cases;
	long long number;
	cin >> cases;
	while (cases--) {
		cin >> number;
		int move = 0;
		while (number > 1) {
			if (number % 2 == 0) {
				number /= 2;
			} else if (number % 3 == 0) {
				number /= 3;
				number *= 2;
			} else if (number % 5 == 0) {
				number /= 5;
				number *= 4;
			} else {
				move = -1;
				break;
			}
			move++;
		}
		cout << move << endl;
	}
}