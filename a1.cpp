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
	for (int i = 0; i < input.length(); i++) {
		if (tolower(input[i]) == loweredLetter) count++;
	}

	cout << string("The letter ") << letter << " is repeated "
		<< count << " times in your sentence" << endl;
}

int main()
{
	countLetter();
}