#include <iostream>
#include <ctime>
using namespace std;

int get_random_number(int limit) {
	return rand() % (limit + 1);
}

int main() {
	srand(time(NULL));
	//cout << time(NULL) << endl;
	int limit = 10;
	int total = limit * 2;
	for (int i = 0; i < 33; i++) {
		cout << get_random_number(limit) << " ";

	}


	return 0;
}