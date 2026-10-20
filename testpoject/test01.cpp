#include <iostream>
#define SIZE 10
using namespace std;

int main() {
	int marks[SIZE];
	
	cout << "Input your ten max: ";


	for (int index = 0; index < SIZE; index++) {
		cin >> marks[index];
	}
	for (int index = 0; index < SIZE; index++) {
		cout << marks[index] << endl;
	}

	return 0;
}