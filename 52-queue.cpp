#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    long arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    long long sum = arr[0];
    long  count = 1;
    for(int i = 1; i< n; i++) {
            if(sum > arr[i]) {

            }
        sum = sum + arr[i];



    }



}
