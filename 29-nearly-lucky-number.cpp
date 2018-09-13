#include<bits/stdc++.h>
using namespace std;


string luckychecker(int a) {
    string s = to_string(a);
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '4' || s[i] == '7') {
            count++;
        }
    }
    if(count == s.length()) {
        return "YES";
    }
return "NO";
}

int main() {
    long long n;
    string s = to_string(n);
    int count = 0;
    for(int i = 0; i< s.length(); i++) {
        if(s[i] == '4' || s[i] == '7') {
            count++;
        }
    }

    cout << luckychecker(count);



}
