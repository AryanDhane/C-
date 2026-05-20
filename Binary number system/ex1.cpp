#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int binary[32];   // array to store binary digits
    int i = 0;

    // conversion
    while(n > 0) {
        binary[i] = n % 2;   // store remainder (0 or 1)
        n = n / 2;           // reduce number
        i++;
    }

    // print in reverse order
    cout << "Binary: ";
    for(int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    
    return 0;
}