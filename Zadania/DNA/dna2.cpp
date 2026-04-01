#include <iostream>
using namespace std;

int main()
{
    int n, x, maksi = 0;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i]) {
            x++;
            if (x > maksi) maksi = x;
        } else {
            x = 0;
        }
    }
    cout << maksi << '\n';
}