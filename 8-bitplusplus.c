#include<bits/stdc++.h>

using namespace std;

int main() {



    int n;
    cin >> n;

    int x = 0;

    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;


}
