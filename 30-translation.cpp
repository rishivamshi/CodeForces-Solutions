#include<bits/stdc++.h>
using namespace std;


string check(string s1, string s2) {

    if(s1.length() != s2.length()) {
        return "NO";
    }

    for(int i = 0; i< s1.length(); i++) {
        if(s1[i] != s2[s1.length()-1-i]) {
            return "NO";
        }
    }
    return "YES";


}

int main() {

    string s1,s2;
    cin >> s1 >> s2;

    cout << check(s1,s2);



}
