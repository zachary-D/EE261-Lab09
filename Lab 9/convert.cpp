// Program Convert converts a temperature from Fahrenheit to
// Celsius or a temperature from Celsius to Fahrenheit
// depending on whether the user enters an F or a C.

#include <iostream>
using namespace std;

int ConvertedTemp(int tempIn, char letter)
{
	if (letter == 'C')
		return (9 * tempIn / 5) + 32;
	else
		return 5 * (tempIn - 32) / 9;
}
// If letter is a 'C,' tempIn is converted from Celsius
// to Fahrenheit; otherwise tempIn is converted from
// Fahrenheit to Celsius.


bool checkError(char input)		//returns true if 'input' is invalid (not F, C, or Q)
{
	return !(input == 'F' || input == 'C' || input == 'Q');
}


void menu()
{
	char letter = 'e';	// Place to store input letter, initialized to 'e' (so that the main loop is entered)
	int tempIn;		// Temperature to be converted
	
	while (letter != 'Q')
	{
		do
		{
			cout << "Input Menu" << endl << endl;
			cout << "F:  Convert from Fahrenheit to Celsius" << endl;
			cout << "C:  Convert from Celsius to Fahrenheit" << endl;
			cout << "Q:  Quit" << endl;
			cout << "Type a C, F,  or Q; then press return." << endl;

			cin >> letter;

			if (checkError(letter))
			{
				cout << "I'm sorry, I don't understand \"" << letter << "\", please try again." << endl;
			}

		} while (checkError(letter));

		if (letter == 'Q') break;	//Exit the loop now if we're quitting

		cout << " Type an integer number, and press return."
			<< endl;
		cin >> tempIn;

		if (letter == 'F')
			cout << "Fahrenheit to Celsius" << endl;
		else
			cout << "Celsius to Fahrenheit" << endl;
		cout << "Temperature to convert: " << tempIn << endl;
		cout << "Converted temperature:  "
			<< ConvertedTemp(tempIn, letter) << endl << endl;
	}
}

int main()
{
	menu();
	return 0;
}