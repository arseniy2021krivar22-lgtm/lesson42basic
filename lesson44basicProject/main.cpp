#include "logic.h"
double calculate_avg(int marks[NUMBER]) {
	double sum = 0;

	for (int i = 0; i < NUMBER; i++) {
		sum += marks[i];
	}

	return sum / NUMBER;
}
