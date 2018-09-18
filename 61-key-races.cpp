#include<bits/stdc++.h>

using namespace std;

int main() {

    int s,v1,v2,t1,t2;

    cin >> s >> v1 >> v2 >> t1 >> t2;

    int f = 2 * t1 + v1 * s;
    int se = 2 * t2 + v2 * s;

    if(f < se) {
        cout << "First";
    } else if(f > se) {
    cout << "Second";
    } else {
        cout << "Friendship";
    }


}
