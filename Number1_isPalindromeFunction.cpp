//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool isPalindrome(string checkString);
//
//int main() {
//
//	string str;
//
//	cout << "Please enter a string to determine if it is a palindronme: \n";
//	cin >> str;
//	cout << endl;
//	isPalindrome(str);
//
//
//	return 0;
//}
//
//bool isPalindrome(string checkString) {
//
//	int length = checkString.length(); //length = 9
//
//	for (int i = 0; i < length / 2; i++) {
//		if (tolower(checkString[i]) != tolower(checkString[length - 1 - i])) {
//			cout << "The string is not a PALINDROME" << endl;
//		}
//		else {
//			cout << "The string is a palindrome" << endl;
//		}
//	}
//	
//	return true;
//
//}
