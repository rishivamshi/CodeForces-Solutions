#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    string newstring = "";

    for(int i = 0; i < s.length() ; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }



    for(int i = s.length()-1; i>=0; i--) {

        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ) {

            continue;


        } else {

            newstring = newstring + s[i] + ".";

        }




    }

    for(int i = 0; i< newstring.length(); i++) {
        cout << newstring[newstring.length()-i-1];
    }




}
