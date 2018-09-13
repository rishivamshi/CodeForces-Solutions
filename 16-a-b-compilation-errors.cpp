#include<bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;
    int a = 0,b = 0,c = 0;

    for(int i = 0; i< 3; i++ ) {
            int sum = 0;
        for(int j = i; j < n; j++) {
            int temp;
            cin >> temp;
            sum = sum + temp;

        }
        if(i == 0) {
            a = sum;
        }
        if(i==1) {
            b = sum;
        }
        if(i==2) {
            c = sum;
        }

    }
    cout << a-b << endl << b-c;



}
