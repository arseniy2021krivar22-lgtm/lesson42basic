#include <iostream>
using namespace std;

int main() {
	int min = 2'000'000'000;
	int max = -1;

	for (int i = 0; i < 100'000; i++) {
		
		int n = rand();
		if (n > max) {
			max = n;
		}
		if (n < min) {
			min = n;
		}

	}

	cout << "\nmax random value: " << max << endl;
	cout << "\nmin random value: " << min << endl;

	return 0;
}