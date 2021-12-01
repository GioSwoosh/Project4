#include "myheader.h"

void PrintHeaderToFile() {
	ofstream outputFile;
	string outFileName;
	const char PROGRAMMER[30] = "NAME";
	const char CLASS[5] = "CSC5";
	const char SECTION[25] = "MWed 2:20 - 5:30PM";
	const int LAB_NUM = 1;
	const char LAB_NAME[17] = "Project 4";

	cout << "What output file would you like to use? ";
	getline(cin, outFileName);

	outputFile.open(outFileName.c_str());

	outputFile << left;
	outputFile << "**************************************************";
	outputFile << "\n* PROGRAMMED BY : " << PROGRAMMER;
	outputFile << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	outputFile << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	outputFile << "\n* " << setw(14) << "LAB" << ": " << LAB_NAME;
	outputFile << "\n**************************************************\n\n";
	outputFile << right;
	//outputFile.close();

	return;
}