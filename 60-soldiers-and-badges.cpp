#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    sort(arr, arr + n);

    int a;
    int c = 0;

    for (int i = 1; i < n; i++)

        if (arr[i] == arr[i - 1]) {

            arr[i]++;
            c++;

        }

        else if (arr[i] < arr[i - 1]) {

            a = arr[i - 1] - arr[i];
            arr[i] = arr[i] + a;
            c = c + a;
            arr[i]++;
            c++;
        }

    cout << c << endl;


}
