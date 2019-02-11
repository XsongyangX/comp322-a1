#include <iostream>
#include <string>
#include <locale>

using namespace std;

void countLetter() {
	cout << "Please enter a sentence: ";
	
	string input;
	getline(cin, input);

	cout << "Please enter a letter: ";

	char letter;
	cin >> letter;
	int loweredLetter = tolower(letter);

	// iterate over chars
	int count = 0;
	for (char c : input) {
		if (tolower(c) == loweredLetter) count++;
	}

	cout << string("The letter ") << letter << " is repeated "
		<< count << " times in your sentence" << endl;
}

int main()
{
	countLetter();
}