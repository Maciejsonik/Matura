#include <iostream>
#include <vector>
using namespace std;

vector<int> V;

bool kros(vector<int> V, int n, int k) {
    if (k >= n)
        return true;

    for (int i = 0; i < n - k; i++) {
        if (!V[i] < V[i + k]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;
    V.reserve(n);

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        V.push_back(a);
    }

    if (kros(V, n, k)) {
        cout << "TAK\n";
    } else {
        cout << "NIE\n";
    }
}