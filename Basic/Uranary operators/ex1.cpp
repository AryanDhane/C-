#include <iostream>
using namespace std;

int main (){

int a = 10;

int b = a++; // post increment
cout << "a: " << a << endl; // 11
cout << "b: " << b << endl; // 10

int c = ++a; // pre increment
cout << "a: " << a << endl; // 12
cout << "c: " << c << endl; // 12


    return 0;

}