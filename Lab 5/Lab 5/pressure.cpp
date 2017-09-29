// Program Pressure prints appropriate messages based on
// a pressure reading input from the keyboard.

#include <iostream>
using namespace std;

int main()
{
	int  pressure;
	cout << "Enter an integer pressure reading. "
		<< " Press Return." << endl;
	cin >> pressure;
	if (pressure > 100) cout << "Warning!! Pressure reading above danger limit." << endl;
	else if (pressure <= 5) cout << "The pressure is unusally low" << endl;
	else cout << "Everything seems normal." << endl;


	cin.get(); cin.get();	//Hold the window open.
	return 0;
}
