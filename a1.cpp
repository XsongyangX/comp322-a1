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

void convertPhonetic() {
	cout << "Please enter a word: ";
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		switch (tolower(input[i])) {
		case 'a':
			cout << "Alfa";
			break;
		case 'b':
			cout << "Bravo";
			break;
		case 'c':
			cout << "Charlie";
			break;
		case 'd':
			cout << "Delta";
			break;
		case 'e':
			cout << "Echo";
			break;
		case 'f':
			cout << "Foxtrot";
			break;
		case 'g':
			cout << "Golf";
			break;
		case 'h':
			cout << "Hotel";
			break;
		case 'i':
			cout << "India";
			break;
		case 'j':
			cout << "Juliett";
			break;
		case 'k':
			cout << "Kilo";
			break;
		case 'l':
			cout << "Lima";
			break;
		case 'm':
			cout << "Mike";
			break;
		case 'n':
			cout << "November";
			break;
		case 'o':
			cout << "Oscar";
			break;
		case 'p':
			cout << "Papa";
			break;
		case 'q':
			cout << "Quebec";
			break;
		case 'r':
			cout << "Romeo";
			break;
		case 's':
			cout << "Sierra";
			break;
		case 't':
			cout << "Tango";
			break;
		case 'u':
			cout << "Uniform";
			break;
		case 'v':
			cout << "Victor";
			break;
		case 'w':
			cout << "Whiskey";
			break;
		case 'x':
			cout << "X-ray";
			break;
		case 'y':
			cout << "Yankee";
			break;
		case 'z':
			cout << "Zulu";
			break;
		}

		cout << " ";
	}
}

int main()
{
	countLetter();
	convertPhonetic();
}