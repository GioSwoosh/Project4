#include "myheader.h"

int SearchForMatch(string employeeName[], string empName, const int size) {
	int index = 0;
	int position = -1;
	bool found = false;
	
	while (index < size && !found) {
		if (employeeName[index] == empName) {
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}