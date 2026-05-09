#include <iostream>
using namespace std;

int main () {
   int i = 1;
    int n = 10;
    bool isPrime = true;

   for (i = 2; i <= n-1; i++) {
    if (n%i == 0) {
        isPrime = false;
        break;
    }
   }
   if (isPrime) {
       cout << n << " is a prime number." << endl;
   } else {
       cout << n << " is not a prime number." << endl;
   }
    return 0;
}                                                                           