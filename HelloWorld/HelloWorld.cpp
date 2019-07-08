
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
//System.out
// F5 runs the code
int main() { 
	// << stream insert
	// >> stream extraction
	cout << "Hello World!" << " CPW 218" << endl;
	cout << "What's your name? ";
	string name;
	cin >> name;
	cout << "Your name is " << name << endl;
	system("pause");
	return 0;
}