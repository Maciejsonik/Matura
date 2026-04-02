#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> V;
    V.reserve(n);

    for (int i = 1; i <= n; i++) {
        V.push_back(i);
    }

    int pos = 0;

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        int s = (int)V.size();

        if (i % 2 == 0) {
            pos = (pos + x) % s;
        } else {
            pos = ((pos - x) % s + s) % s;
        }

        V.erase(V.begin() + pos);

        if (!V.empty()) {
            int ns = (int)V.size();
            if (i % 2 == 0) {
                pos = (pos - 1 + ns) % ns;
            } else {
                pos = pos % ns;
            }
        }
    }

    cout << V[0] << '\n';
}