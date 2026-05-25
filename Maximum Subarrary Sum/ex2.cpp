
// Maximum Subarray Sum


#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};

    int n = 7;

    int maxsum= INT_MIN;

    for (int st=0; st<n; st++){
        int currsum = 0;
        for (int en=st; en<n; en++){
            currsum += arr[en];
            maxsum = max(maxsum, currsum);
        }
    }

    cout << maxsum << endl;
    return 0;
}