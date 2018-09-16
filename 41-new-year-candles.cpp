#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int sum = 0;

    while (a >= b)
    {
        sum = sum + b;
        a = a- b;
        ++a;
    }

    cout << sum + a;


}
