#include <iostream>
#include <string>

using namespace std;

bool isVowel(char h);

int main() {
	char ch;

	cout << "Please enter a string to determine if character is a vowel: \n";
	cin >> ch;
	cout << "The value of the function " << isVowel(ch) << endl;

	return 0;
}

bool isVowel(char h) {
	if (h != 'a' && h != 'e' && h != 'i' && h != 'o' && h != 'u') {
		return true;
	}
	else {
		return false;
	}
}