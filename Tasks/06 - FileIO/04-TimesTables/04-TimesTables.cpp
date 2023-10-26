#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outputstream;
	outputstream.open("tables.txt");

	if (outputstream.is_open() == false) {
		cerr << "Cannot create the file" << endl;
		return -1;
	}
	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			outputstream << r * c << "\t";
		}
		outputstream << endl;
	}
	outputstream << endl;

	outputstream.close();

	return 0;
}