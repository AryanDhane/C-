// Sum of two numbers    using function

#include <iostream>
using namespace std;

int sum(int a ,int b){
    int s = a + b;
    return s;
}

int main (){
    int a = 10;
    int b = 20;

    cout << "Sum of a and b is :" << sum(a, b) << endl;
    return 0;
}


// Output:
// Sum of a and b is :30

// In this code, we define a function named `sum` that takes two
//  integer parameters `a` and `b`, calculates their sum, and returns
//  the result. In the `main` function, we initialize two integers `a`
//  and `b`, call the `sum` function with these values, and print the 
//  result to the console.
