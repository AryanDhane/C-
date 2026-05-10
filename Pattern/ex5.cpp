#include <iostream>
using namespace std;

int main() {
int n = 5;

int num=1;
for (int i=0; i<n; i++){ // outer loop
    for (int j=0; j<i+1; j++){ // inner loop
        cout <<(i+1) <<" ";
    }
cout << endl;
}

    return 0;
}



// OUTPUT
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 