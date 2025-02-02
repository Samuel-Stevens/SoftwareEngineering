#include <iostream>

using namespace std;

int L = 0;

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void displaywithinBanner(string message)
{
	L = message.length();

	displayBanner(L);
	
	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	displayBanner(L);
}


int main()
{
	const string message = "Welcome to Computer Science";

	//Get the length of the string
				//L is now a LOCAL variable

	//Write the banner above
	//displayBanner(L);

	displaywithinBanner(message);

	//Write the banner below
	//displayBanner(L);

	//Tell the calling shell all is well
	return 0;
}