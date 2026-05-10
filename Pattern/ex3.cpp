#include <iostream>
using namespace std;

int main() {
int n = 3;

int num=1;
for (int i=0; i<n; i++){ // outer loop
    for (int j=0; j<i+1; j++){ // inner loop
        cout << "*" <<" ";
        num++;
    }
cout << endl;
}

    return 0;
}


// OUTPUT
// * 
// * * 
// * * * 