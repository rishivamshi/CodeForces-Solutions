#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;

    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; i< t; i++) {

        int j = 0;
        while(j < n-1) {
            if(s[j] == 'B' && s[j+1] == 'G') {
                swap(s[j], s[j+1]);
                j++;
            }
            j++;
        }


    }
    cout << s;


}
