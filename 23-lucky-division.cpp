#include<bits/stdc++.h>
#include<string>
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

string lucky(int n) {

    if(luckychecker(n) == "YES" ) {
        return "YES";
    }

    if(n < 4) {
        return "NO";
    }

    for(int i = 4; i < n; i++) {

        if(luckychecker(i) == "YES") {
            if(n % i == 0) {
                return "YES";
            }
        }



    }
    return "NO";



}




int main() {
    int n;
    cin >> n;
    cout << lucky(n);


}
