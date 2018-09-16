
#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i< n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);



    long long totalsum = 0;
    for(long long i = 0; i< n; i++) {
        totalsum = totalsum + arr[i];
    }

    long long q;
    cin >> q;
    while(q--) {
        long long k;
        cin >> k;
        long long sum = arr[0] * n;


        if(k < sum ) {
            cout << ceil((double)k/n) << endl;
        }
    else if ( k > totalsum ) {
        cout << -1 << endl;
    }
        else {
            long long diff;
            long long count = 0;
            for(long long i = 1; i< n; i++) {
                diff = arr[i] - arr[i-1];
                while(diff > 0) {
                    sum = sum + (n-i);
                    count++;
                    if(sum >= k) {
                        break;
                    }
                    diff--;
                }
                if(sum >= k) {
                    break;
                }
            }

            cout << count+arr[0] << endl;
        }

    }

}
