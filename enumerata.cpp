#include <iostream>
using namespace std;

int calculateCrossSum(int number) {
    int sum = 0;

    // Convert negative numbers to positive
    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        sum += number % 10;  // Extract the last digit and add to sum
        number /= 10;        // Remove the last digit from the number
    }

    return sum;
}

int main() {
	char c;
	cout << "Enter a character: ";
	cin >> c;
    int ASCIIvalue = int(c);
	cout << "ASCII Value of " << c << " is " << ASCIIvalue << "\n";

    int enumerati = calculateCrossSum(ASCIIvalue);
    enumerati = calculateCrossSum(enumerati);
    cout << "Magic number: " << enumerati;
	
	return 0;
}
