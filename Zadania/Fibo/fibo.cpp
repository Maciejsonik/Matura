#include <iostream>
using namespace std;

int fibo (int n) {
    if (n == 0 || n == 1 ||  n == 2) return 2;
    return 2 * fibo(n - 3) + fibo(n - 1);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << fibo(i) << " ";
    } 
}