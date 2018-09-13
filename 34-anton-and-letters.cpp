#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    if(s.length() < 3) {
        cout << 0;
    }
    else if( s.length() == 3 ) {
        cout << 1;
    }
    else {
        vector<char> v;
        for(int i = 1; i< s.length(); i = i + 3) {
            v.push_back(s[i]);

    }

    set<char> s1(v.begin(), v.end());
    cout << s1.size();

    }


}
