#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> e,v;
    int in;
    for(int i = 0; i< n; i++) {
        cin >> in;
        if(in%2 == 0) {
            e.push_back(i+1);
        } else {
            v.push_back(i+1);
        }
    }

    if(e.size() == 1) {
        cout << e[0];
    }
    else if(v.size() == 1) {
        cout << v[0];
    }


}




