#include <iostream>
#include <map>
using namespace std;

map<string, int> M;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (M.find(s) == M.end()) {
            cout << "OK\n";
            M[s] = 0;
        } else {
            M[s]++;
            cout << s << M[s] << "\n";
        }
    }
}