#include <iostream>
using namespace std;

int main() {


    int a, b;

    cin >> a >> b;
    bool flag = false;
    for (int i = 0; i < a; i++) {

        for (int j = 0; j < b; j++) {

            char c;
            cin >> c;

            if (c == 'C' || c == 'M' || c == 'Y') {
                flag = true;
                break;
            }
        }

        if (flag) {
            break;
        }
    }

    if (flag) {
        cout << "#Color";

    }
    else {
        cout << "#Black&White";
    }
}
