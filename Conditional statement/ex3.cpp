
// grade calculator using if else statement

#include <iostream>
using namespace std;

int main (){

int marks;
cout << "Enter your marks: ";
cin >> marks;

if (marks >= 90) {
    cout << "A" << endl;
}else if (marks >= 80) {
    cout << "B" << endl;    
}else if (marks >= 70) {
    cout << "C" << endl;
}else if (marks >= 60) {
    cout << "D" << endl;
}else {
    cout << "F" << endl;
}

    return 0;

}