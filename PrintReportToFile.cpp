#include "myheader.h"

void PrintReportToFile(string employeeName[], int employeeId[], float employeeBal[], int valid) {
	string outFileName;
	ofstream outputFile;
	outputFile.open(outFileName.c_str());

	outputFile << "THIS IS ME TESTING IF IT OPENSNADJNA";
	outputFile << employeeName[valid] << employeeId[valid] << employeeBal[valid];
	outputFile.close();
	return;
}