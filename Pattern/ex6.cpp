#include <iostream>
using namespace std;

int main() {
int n = 5;

int num=1;
for (int i=0; i<n; i++){ // outer loop
    for (int j=0; j<i+1; j++){ // inner loop
        cout << j <<" ";
    }
cout << endl;
}

    return 0;
}


// OUTPUT
// 0 
// 0 1 
// 0 1 2 
// 0 1 2 3 
// 0 1 2 3 4 