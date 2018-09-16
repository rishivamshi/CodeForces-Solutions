
#include<bits/stdc++.h>
using namespace std;





int main() {

    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i< n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);




vector<long long > v;



        long long sum = arr[0] * n;

v.push_back(sum);

            long long diff;

            for(long long i = 1; i< n; i++) {
                diff = arr[i] - arr[i-1];
                while(diff > 0) {
                    sum = sum + (n-i);
                    v.push_back(sum);
                    diff--;
                }

            }
            for(int i = 0; i< v.size(); i++) {
                cout << v[i] <<endl;
            }






}

