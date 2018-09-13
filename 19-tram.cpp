#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int max1 = 0;
    int totalmax = 0;
    while(n--) {
        int a,b;

        cin>> a >> b;
        max1 = max1 -a + b;
        if(max1 > totalmax) {
            totalmax = max1;
        }
    }
    cout << totalmax;



}
