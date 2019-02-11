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

	cout << endl;
}

/* QUESTION 3
Tail recursion is the practice of making a recursive call at the end of 
a function. Since there is nothing else after this recursive call, the 
call stack does not need to store additional information. 

Yes. A recursive function can be made tail recursive if we increase the 
amount of arguments it takes. For example, the factorial function can take
one additional argument that stores the partial product and pass it along
to the next call. This avoids the n*fact(n-1) at the end of a function. 
For more complicated recursions, there is the continuation-passing style.
*/

int fact(int n, int product) {

	if (n == 1) return product;
	else if (n == 0) return 1;
	else return fact(n - 1, n*product);

}

void factorial() {
	cout << "Please enter a number: ";
	string number;
	cin >> number;

	int n = stoi(number);

	cout << "The factorial of " << n << " is " << fact(n, 1) << endl;
}

int enhancedFact(int n) {
	int bases[] = { 1,2,6,24,120,720 };

	if (n <= 6) return bases[n - 1];

	int product = 1;
	int iter = n;
	while (iter > 6) {
		product = product * iter;
		iter--;
	}
	return product*bases[5];
}

void enhancedFactorial() {

	cout << "Please enter a number: ";
	string number;
	cin >> number;

	int n = stoi(number);

	cout << "The factorial of " << n << " is " << enhancedFact(n) << endl;

}

int main()
{
	countLetter();
	convertPhonetic();
	factorial();
	enhancedFactorial();

	return 0;
}