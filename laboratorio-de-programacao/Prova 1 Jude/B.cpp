#include <iostream>

using namespace std;

int main() {

	int number;

	cin >> number;

	for (int i=2; i < number; i++) {

		if (number % i == 0) {
			cout << number << " nao eh primo" << endl;
			return 0;
		}
	}

	cout << number << " eh primo" << endl;
}