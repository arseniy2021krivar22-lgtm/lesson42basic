#include <iostream>
using namespace std;

int main() {
	// ++ --
	int number = 1'000'000;
	int count = 0 ;

	while (number > 0) {
		number /= 2;
		count++;
	}

	
	cout << count << endl; 
	return 0;
}