#include<bits/stdc++.h>
using namespace std;


string helloInString(string s) {

    string hs = "hello";
    int i = 0, j = 0;
    while( i < s.length() && j < hs.length()) {
        if(s[i] == hs[j]) {
            j++;

        } i++;
    }
    if( j == hs.length()) {
        return "YES";
    }
return "NO";
}

int main() {

    string s;
    cin >> s;
    cout << helloInString(s);



}
