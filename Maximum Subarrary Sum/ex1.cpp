#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};

    int n = 7;

    for (int st=0; st<n; st++){
        for (int en=st; en<n; en++){
            for (int i=st; i<=en; i++){
                cout << arr[i] ;
            }
            cout << endl;
        }
    }
    return 0;

}
 