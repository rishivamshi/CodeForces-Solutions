#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    size_t found1 = s.find("0000000");
    size_t found2 = s.find("1111111");
    if(found1 != string::npos || found2 != string::npos) {
        cout << "YES";

    }

    else {
        cout << "NO";
    }


}
