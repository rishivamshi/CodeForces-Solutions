#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << 1;
    }
    else if(k <= ceil((double) n/2) ) {

        cout << 1 + (k-1) * 2;


    } else {
        k = k - ceil( (double) n/2 );

        cout << 2 + (k - 1) * 2;
    }


}
