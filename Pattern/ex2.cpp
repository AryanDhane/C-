#include <iostream>
using namespace std;

int main() {
    
int n = 5;

for (int i= 0; i<n; i++){ // outer loop
    char ch =  'A';
    for (int j=0; j<n; j++){ // inner loop
        cout << ch<< " ";
        ch++;
    }
    cout << endl;
}

    return 0;
}


// OUTPUT
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 