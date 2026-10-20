#include "logic.h"
int main() {
	int mark1, mark2, mark3;
	cout << "Input student marks: " << endl;
	cin >> mark1 >> mark2 >> mark3;
	double avg = calculate_avg(mark1, mark2, mark3);
	cout << "result: "<<avg << endl;

	return 0;
}