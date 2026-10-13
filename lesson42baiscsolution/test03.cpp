#include <iostream>
using namespace std;
int get_random_number(int a, int b) {
	if (a>b) {
		int t = a;
		a = b;
		b = t;
	}


	return rand() % (b - a + 1) + a;
}

int main() {

	int a = -10;
	int b = -5;
	int count = (b - a + 1) * 2;

	for (int i = 0; i < 33; i++) {
		cout << get_random_number(a, b) << " ";

	}


	return 0;
}