#include<bits/stdc++.h>

using namespace std;


string iwannabetheguy(bool arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == false) {
            return "Oh, my keyboard!";

        }
    }

    return "I become the guy.";

}

int main() {
    int n;
    cin >> n;
    bool guy[n];
    memset(guy, false, sizeof(false));

    int p,q;
    cin >> p;
    for(int i = 0; i< p; i++) {
        int k;
        cin >> k;
        guy[k-1] = true;
    }
    cin >> q;
    for(int i = 0; i< q; i++) {
        int k;
        cin >> k;
        guy[k-1] = true;
    }

    cout << iwannabetheguy(guy,n );



}
