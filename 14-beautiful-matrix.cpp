#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[6][6];

    for(int i = 1; i< 6;i++) {
        for(int j = 1; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    int pos1,pos2;
    for(int i = 1; i< 6;i++) {
        for(int j = 1; j < 6; j++) {
            if(arr[i][j] == 1) {
                pos1 = i;
                pos2 = j;
            }
        }
    }

    cout << abs(3-pos1) + abs(3-pos2);


}
