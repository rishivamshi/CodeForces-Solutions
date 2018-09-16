#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {

        string s;
        cin >> s;

        if(s.length() %2 == 0) {
            cout << "Not Strong" << "\n";
        } else {

            if(s[0] != '*') {
                cout << "Not Strong" << "\n";
            }
            else {




                        while(1) {
                            size_t found = s.find("-*");
                            if(found != string::npos) {
                                    s.erase(found,1);
                                    s.erase(found,1);
                            }
                            else {
                                break;
                            }
                        }
                        if(s == "*") {
                            cout << "Strong" << "\n";
                        } else {
                        cout << "Not Strong" << "\n";
                        }


            }

        }



    }



}
