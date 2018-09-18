#include<bits/stdc++.h>

using namespace std;

int main() {

    bool sd = false;

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++) {
        cin >> arr[i];
    }

    int i = 0, j = n-1;
    int ssum = 0, dsum = 0;
    while(i < j + 1) {
        sd = !sd;
        if(sd) {
            if(arr[i] >= arr[j]) {
                ssum = ssum + arr[i];
                i++;
        } else {
            ssum = ssum + arr[j];
            j--;
        }

    }
    else {
       if(arr[i] >= arr[j]) {
                dsum = dsum + arr[i];
                i++;
        } else {
            dsum = dsum + arr[j];
            j--;
        }




    }



}
cout << ssum << " " << dsum;
}
