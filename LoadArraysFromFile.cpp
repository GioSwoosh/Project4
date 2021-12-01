#include "myheader.h"

void LoadArraysFromFile(string employeeName[], int employeeId[], float employeeBal[], const int size) {
	ifstream inputFile;
	string inFileName;
	cout << "What input file would you like to use?  ";
	getline(cin, inFileName);

	inputFile.open(inFileName.c_str());

	for (int i = 0; i < size; i++) {
		getline(inputFile, employeeName[i]);
		inputFile >> employeeId[i] >> employeeBal[i];
		inputFile.ignore();
	}

	inputFile.close();

	return;
}
