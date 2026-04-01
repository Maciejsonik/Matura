#include <iostream>
using namespace std;

int nwd(int a, int b) {
    if (b == 0) return a;
    int r = a % b;
    a = b;
    b = r;
    return nwd(a, b);
}

pair<int, int> rozEuk(int a, int b) {
    if (b == 0) return {1, 0};
    int r = a % b;
    pair<int, int> p = rozEuk(b, r);
    return {p.second, p.first - (a / b) * p.second};
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << nwd(a, b) << " " << rozEuk(a, b).first << " " << rozEuk(a, b).second;
}