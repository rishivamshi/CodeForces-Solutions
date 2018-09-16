#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    int ccount = 0,lcount = 0;
    for(int i = 0; i< s.length(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            ccount++;
        } else {
            lcount++;

        }
    }

    if(lcount >= ccount) {
        for(int i = 0; i< s.length(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
                cout << s[i];
            } else {
            cout << s[i];
            }
        }
    } else {
        for(int i = 0; i< s.length(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
                cout << s[i] ;
            } else {
            cout << s[i];
            }
        }


    }



}
