#include<bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c,d;

    cin >> a >> b >> c >> d;

    double v,m;

    m = (double) max ((double)3 * a / 10, (double) a - a * c/250);
    v = (double) max ((double)3 * b / 10, (double) b - b * d/250);

    if(v > m )  {
        cout << "Vasya";
    } else if(v < m) {
        cout << "Misha";
    } else {
        cout << "Tie";
    }

}
