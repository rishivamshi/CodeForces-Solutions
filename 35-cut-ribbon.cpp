#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i< 3; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    int sum = 0;
    int i = 0;
    while(sum <= n && i < 3) {
        sum = sum + v[i];
        i++;
    }
    if(sum > n) {
        cout << i-1;
    }else {
    cout << i;
    }


}
