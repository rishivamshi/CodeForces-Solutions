#include<bits/stdc++.h>
using namespace std;

int main() {

    int n = 1000000;

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }


    int s;
    cin >> s;

    int a = floor( (float)s/2 );
    int b = ceil( (float)s/2 );


    while(prime[a] == true || prime[b] == true) {
        a--;
        b++;
    }

    cout << a << " "<< b;

}
