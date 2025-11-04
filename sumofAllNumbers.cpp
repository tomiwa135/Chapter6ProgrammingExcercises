#include <iostream>

using namespace std;

int main() {
	int sum;
	int N;


	cout << "Please enter the number to be summed up: ";
	cin >> N;
	cout << endl;

	sum = 0;

	for (int counter = 0; counter < N; counter++) {
		sum = sum + counter;
	}

	return 0;
}