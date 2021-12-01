#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void LoadArraysFromFile(string employeeName[], int employeeId[], float employeeBal[], const int size);
int SearchForMatch(string employeeName[], string empName, const int size);
void PrintHeaderToFile();
void PrintReportToFile(string employeeName[], int employeeId[], float employeeBal[], int valid);
