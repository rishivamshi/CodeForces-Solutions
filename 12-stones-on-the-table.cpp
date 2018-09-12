#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; i< n-1; i++) {

        if(s[i] == 'R' && (s[i+1] != 'G' && s[i+1] !='B') ) {
            count++;
        }
        else if(s[i] == 'B' && (s[i+1] != 'G' && s[i+1] !='R') ) {
            count++;
        }
        else if(s[i] == 'G' && (s[i+1] != 'R' && s[i+1] !='B') ) {
            count++;
        }




    }
    cout << count;


}
