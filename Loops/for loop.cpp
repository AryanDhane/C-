#include <iostream>
using namespace std;
int main() {

int n = 5;
int i = 1;
int sum = 0;

for (int i=1; i <= n; i++) {
    sum += i;
    if (i == 4) {
        break; // Exit the loop when i is 4
    }
    cout << i << endl;
}
cout << "Sum: " << sum << endl;
    return 0;
}