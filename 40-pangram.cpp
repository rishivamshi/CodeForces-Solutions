#include<bits/stdc++.h>
using namespace std;


string pangram(int arr[]) {
    for(int i = 0; i< 26; i++) {
        if(arr[i] == 0) {
            return "NO";
        }
    }
return "YES";
}

int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    int arr[26] = {0};

    for(int i = 0; i< n; i++) {

        if(s[i] >='A' && s[i] <= 'Z') {

            s[i] = s[i] + 32;

        }

        arr[s[i] - 97]++;


    }
    cout << pangram(arr);





}
