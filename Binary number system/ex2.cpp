#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int i = 0;
    int rem;

    while(binary > 0) {

        rem = binary % 10;   // get last digit

        decimal = decimal + rem * pow(2, i);

        binary = binary / 10; // remove last digit

        i++;
    }

    cout << "Decimal number = " << decimal;

    return 0;
}