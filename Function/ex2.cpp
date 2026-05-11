// Max of two numbers    using function

#include <iostream>
using namespace std;

int Max(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    } 
}

int main (){
    int a = 10;
    int b = 20;

    cout << "Max of a and b is :" << Max(a , b) << endl;
    return 0;
}


// Output:
// Max of a and b is :20

// In this code, we define a function named `Max` that takes two
//  integer parameters `a` and `b`, compares them, and returns the
//  larger of the two. In the `main` function, we initialize two integers `a`
//  and `b`, call the `Max` function with these values, and print the
//  result to the console.