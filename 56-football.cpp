#include<bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<string, int> &a, const pair<string, int> &b) {

return a.second > b.second;

}

int main() {
    int n;
    cin >> n;

    map<string, int> m;
    vector<pair<string, int> > v;

    for(int i = 0; i< n ; i++)  {

        string s;
        cin >> s;
        m[s]++;



    }

    map<string, int>::iterator it;

    for(it = m.begin(); it!= m.end(); it++) {
        v.push_back(make_pair(it->first, it->second));
    }

    sort(v.begin(), v.end(), sortbysec);
    cout << v[0].first;






}
