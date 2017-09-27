/*Guha Swaminathan - 9/21/17 2nd Period
Assignment Name: Display Text
Project to display your name, period, and 'Hello World'
*/
//Libraries
#include <iostream>
#include <conio.h> // gives access to _kbhit()
// Namespaces
using namespace std;
// Functions()
void pause() {
	cout << "Press any key to Continue...";
	while (!_kbhit());
	cout << "\n";
}

// MAIN
void main() {
	// Define & assign your variable(s)
	// Display Text
	pause();
	// no system(""); commands anymore
}
