#include<bits/stdc++.h>

using namespace std;

int main() {

    map<string, int > m;

    m.insert(make_pair("Tetrahedron", 4));
    m.insert(make_pair("Cube", 6));
    m.insert(make_pair("Octahedron", 8));
    m.insert(make_pair("Dodecahedron", 12));
    m.insert(make_pair("Icosahedron", 20));

    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i< n; i++) {
        string s;
        cin >> s;

        sum = sum + m.find(s)->second;

    }
    cout << sum;


}
