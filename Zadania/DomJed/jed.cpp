#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, end = 0;
    string s;
    cin >> n >> s;

    int maksi = 0, x = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            x++;
        } else {
            if (x > maksi) {
                maksi = x;
                end = i;
            }
            x = 0;
        }
    }
    if (x > maksi) {
        maksi = x;
        end = n;
    }

    if (end == n or end - maksi == 0 or s[n] == '0') {
         cout << maksi;
    } else {
        if (maksi % 2 == 0) {
            cout << maksi / 2;
        }   else {
            cout << maksi / 2 + 1;
        }
    }
}