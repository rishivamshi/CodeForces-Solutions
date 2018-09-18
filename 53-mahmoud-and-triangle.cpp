#include<bits/stdc++.h>

using namespace std;

string check(long arr[], int n) {

    if(n < 3) {
        return "NO";
    }
    for(int i = 0; i < n-2; i++) {
            if(arr[i] + arr[i+1] > arr[i+2]) {
                return "YES";
            }
        }
    return "NO";


}




int main() {

    int n;
    cin >> n;

    long arr[n];
    for(int i = 0; i< n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    string s = check(arr, n);
cout << s;



}
