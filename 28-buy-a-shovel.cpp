#include<bits/stdc++.h>
using namespace std;


int main() {

    int n, r;
    cin >> n >> r;
    int count =1;
    int sum = n;
    while( (sum-r)%10 != 0 ) {
        sum  = sum + n;

        count++;
    }
    int anothercount = ;
    if(anothercount < count) {
        cout << anothercount;
    } else {
    cout << count;
    }


}
