#include "logic.h"
int main() {
	int marks[NUMBER];
	cout << "Inpu ten student marks: " << endl;
	for (int i = 0  ; i < NUMBER; i++) {
		cin >> marks[i];
	}
	double avg = calculate_avg(marks);
	cout << "result: "<<avg << endl;

	return 0;
}