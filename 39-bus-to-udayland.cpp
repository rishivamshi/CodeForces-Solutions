#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<string> v;

    for(int i = 0; i< n; i++) {
        string s;
        cin >> s;
        v.push_back(s);


    }
int count = 0;
    for(int i = 0; i< v.size(); i++) {
        size_t found = v[i].find("OO");
        if(found != string::npos) {
                cout << "YES" << endl;
            v[i][found] = '+';
            v[i][found+1] = '+';
        break;
        }
        else {
            count++;
        }
    }

    if(count == v.size()) {
        cout << "NO";
    }
    else {
        for(int i =0; i< v.size(); i++) {
        cout << v[i] << endl;
    }
    }




}
