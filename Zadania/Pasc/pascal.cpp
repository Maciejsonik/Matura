#include <iostream>
using namespace std;

int B[21][21];

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) {
        B[i][0] = 1;
        B[i][i] = 1;
    }

    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            B[i][j] = B[i - 1][j - 1] + B[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << B[i][j] << " ";
        }
        cout << '\n';
    }

    //cout << B[x][y] << '\n';
}
