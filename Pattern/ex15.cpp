// Butterfiy pattern

#include <iostream>
using namespace std;    

int main (){
int n = 4;

for (int i=0; i<n; i++){ // outer loop
    for (int j=0; j<i+1; j++){ // inner loop
        cout << "*" <<" ";
    }
    for (int j=0; j<2*(n-i-1); j++){ // inner loop
        cout << " " <<" ";
    }
    for (int j=0; j<i+1; j++){
       cout << "*" <<" ";
        }
         // inner loop
        cout << "*" <<" ";
    }
    cout << endl;

for (int i=0; i<n-1; i++){ // outer loop
    for (int j=0; j<n-i-1; j++){ // inner loop
        cout << "*" <<" ";
    }
    
        cout << endl;
    }



return 0;
}