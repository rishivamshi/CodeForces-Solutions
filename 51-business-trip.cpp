#include<bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    int arr[12];
    for(int i = 0; i < 12; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+12, greater<int>());

    int sum = 0;
    int count = 0;

    while(sum <= k) {
        sum = sum + arr[count];
        count++;
        if(sum > k) {
            cout << count-1;
            break;
        }
        if(count >= 12) {
            cout << -1;
            break;
        }
    }



}
