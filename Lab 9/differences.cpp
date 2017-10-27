// Program Differences is for investigating the differences 
// between automatic and static variables.

#include <iostream>
using namespace std;

void  TestLocals()
{
	int count = 1;
	cout << count++ << endl;
}


int main()
{
	TestLocals();
	TestLocals();
	TestLocals();

	cin.get();		//Hold the window
	return 0;
}

