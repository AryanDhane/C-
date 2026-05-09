#include <iostream>
using namespace std;

int main() {
char ch;
cout << "Enter a character: ";
cin >> ch; 

if (ch >= 'A' && ch <= 'Z') {
    cout << " uppercase letter." << endl;
} else if (ch >= 'a' && ch <= 'z') {
    cout << " lowercase letter." << endl;
} else {
    cout << " not a letter." << endl;
}
return 0;
}