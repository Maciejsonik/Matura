//moje

#include <bits/stdc++.h>
using namespace std;

long long T[101];

int main() {
    int n;
    cin >> n;

    T[0] = T[1] = T[2] = 1;

    for (int i = 3; i < n; i++) {
        T[i] = T[i - 1] + T[i - 3];
    }
    cout << T[n - 1] << '\n';
}