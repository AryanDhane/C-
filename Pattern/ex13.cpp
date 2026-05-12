#include <iostream>
using namespace std;

int main(){
int n = 4;

char ch = 'A';

for(int i=0; i<n; i++){
    for (int j=0; j<=i; j++){
        cout << char('A'+j) << " ";
        ch++;
    }
    cout << endl;
}

    return 0;
}

// Output:
// A
// A B
// A B C
// A B C D

