// factorial of n numbers using function

#include <iostream>
using namespace std;

int factorial(int n){
    int f = 1;
    for (int i=1; i<=n; i++){
        f*=i;
    }
    return f;
}

int main (){
    int n = 5;

    cout << "Factorial of nis :" << factorial(n) << endl;

    return 0;
}



// Output:
// Factorial of n is :120