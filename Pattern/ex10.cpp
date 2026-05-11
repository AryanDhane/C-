#include <iostream>
using namespace std;

int main(){
int n =10;

for(int i=1; i<=n; i++){
    char ch = 'A';
    for(int j=1; j<=n; j++){
        cout << ch << " ";
        ch++;
    }
    cout << endl;
}
    return 0;
}


// output
// A B C D E F G H I J
// A B C D E F G H I J
// A B C D E F G H I J
// A B C D E F G H I J
// A B C D E F G H I J
// A B C D E F G H I J
// A B C D E F G H I J      
// A B C D E F G H I J
// A B C D E F G H I J
// A B C D E F G H I J



