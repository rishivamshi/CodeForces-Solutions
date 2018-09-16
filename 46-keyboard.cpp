#include<bits/stdc++.h>
using namespace std;

int main() {

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char lr;
    cin >> lr;
    string s;
    cin >> s;
    for(int i = 0; i< s.length() ; i++) {
        if (lr == 'R') {
            s[i] = keyboard[keyboard.find(s[i]) - 1];
        }
        if(lr == 'L') {
            s[i] = keyboard[keyboard.find(s[i]) + 1];
        }
    }
    cout << s;


}
