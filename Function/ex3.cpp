// Sum of N numbers using function

#include <iostream>
using namespace std;

int sum(int n){
    int s = 0;
    for (int i = 1; i <= n; i++){
        s+=i;
    }
    return s;
}

int main (){
    int n = 10;

    cout << "Sum of first " << n << " numbers is :" << sum(n) << endl;
    return 0;
}


// Output:
// Sum of first 10 numbers is :55