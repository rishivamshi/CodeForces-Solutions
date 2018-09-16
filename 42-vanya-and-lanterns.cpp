#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,l;
    cin >> n >> l;

    vector<double> v;


    for(int i = 0; i< n; i++) {
        double a;
        cin>> a;
        v.push_back(a);
    }
    double diff = 0.0;
    sort(v.begin(), v.end());



    for(int i = 0; i< v.size() -1 ; i++) {

        if( (double)(v[i+1] - v[i])/2 > diff) {
            diff = (double) (v[i+1] - v[i]) / 2;
        }

    }

    diff = max(diff, v[0] - 0.0);
    diff = max(diff, l - v[v.size()-1] );


        cout << fixed;
        cout << setprecision(10);

        cout << diff;






}
