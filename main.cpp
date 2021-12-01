#include "myheader.h"

int main() {
	const int size = 10;
	ifstream inputFile;
	ofstream outputFile;
	string outFileName;
	string employeeName[size];
	int employeeId[size];
	int employeeValidator;
	float employeeBal[size];
	string test;
	string checker;
	string empName;
	string quit;
	int valid;
	int counter = 0;

	quit = "done";
	LoadArraysFromFile(employeeName, employeeId, employeeBal, size);
	PrintHeaderToFile();
	cout << setprecision(2) << fixed;
	for (int i = 0; i < size; i++) {
		cout << employeeName[i] << endl;
		cout << employeeId[i] << " ";
		cout << employeeBal[i] << endl;
	}
	SearchForMatch(employeeName, empName, size);
	while (empName != quit) {
		cout << "Who do you want to search for (enter done to exit): ";
		getline(cin, empName);
		if (empName == quit) {
			cout << "Thank you for using my program." << endl;
		}
		else {
			valid = SearchForMatch(employeeName, empName, size);
			if (valid == -1) {
				cout << empName << " was not found." << endl;
			}
			else {
				cout << "Found." << endl;
				outputFile << employeeName[valid];
				PrintReportToFile(employeeName, employeeId, employeeBal, valid);
			}
		}
	}
	return 0;
}
