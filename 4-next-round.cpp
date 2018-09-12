#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,k;
    cin >> n >> k;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[k];


    int count = 0;

    if(max == 0) {
        cout << 0;
    }
    else {


    for(int i = n; i >= 0; i--   ) {
        if(arr[i] == max) {
            count = i;
            break;
        }
    }
        cout << count + 1;
    }


}
