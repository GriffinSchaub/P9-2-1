//
//
//
//
//

#include <iostream>
#include <string>

using namespace std;

int countWords(string str);

int main(void) {

	string inputword;

	while (true) {
		cout << "Enter a word and this program will count the words or enter Q or q to exit: ";
		getline(cin, inputword);
		if (inputword == "Q" || inputword == "q") break;
		cout << endl << countWords(inputword) << endl;
	}



	cout << endl << countWords(inputword);

}


int countWords(string str) {

	int wordCount = 0;
	int letterNumber = 0;
	bool PreviousCharSpace = true;

	for (int letterNum = 0;letterNum < str.length(); letterNum++) {

		if (str[letterNum] == ' ') {
			PreviousCharSpace = true;

		}
		else if (str[letterNum] != ' ') {
			if (PreviousCharSpace == true) {
				wordCount++;
				PreviousCharSpace = false;
			}

		}
	}

	return (wordCount);

}
