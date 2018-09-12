#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<string> s1;
    for(int i = 0; i< n; i++) {
        string s;
        cin >> s;
        s1.push_back(s);
    }


    for(int i = 0; i< n; i++) {

        if(s1[i].length() > 10) {

            cout << s1[i][0] << (s1[i].length() - 2) << s1[i][s1[i].length() - 1] << endl;
        }
        else {
            cout << s1[i] << endl;
        }

    }



}
