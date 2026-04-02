#include <iostream>
#include <queue>
using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k == -1) {
            cout << pq.top().second << '\n';
            pq.pop();
        } else {
            pq.push({k, i + 1});
        }
    }
}