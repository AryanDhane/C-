#include <iostream>
using namespace std;

int main() {

int a = 10, b = 20;
  
// Performing arithmetic operations

cout << "sum = " << a + b << endl;
cout << "difference = " << a - b << endl;
cout << "product = " << a * b << endl;
cout << "division = " << a / b << endl;

// Performing relational operations

cout << (a<b) << endl; // true
cout << (a>b) << endl; // false
cout << (a<=b) << endl; // true
cout << (a>=b) << endl; // false
cout << (a==b) << endl; // false
cout << (a!=b) << endl; // true

// Performing logical operations

cout << (3>1 && 4>5) << endl; // false
cout << (3>1 || 4>5) << endl; // true
cout << !a << endl; // false

return 0;
}
    