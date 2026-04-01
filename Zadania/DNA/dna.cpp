#include <iostream>
#include <string>
using namespace std;
int T[4];

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') T[0]++;
        if (s[i] == 'C') T[1]++;
        if (s[i] == 'G') T[2]++;
        if (s[i] == 'T') T[3]++;
    }
    
    int maksi = 0;
    for (int i = 1; i < 4; i++) {
        if (T[i] > T[maksi]) maksi = i;
    }
    
    switch (maksi) {
    case 0:
        cout << 'A';
        break;
    case 1:
        cout << 'C';
        break;
    case 2:
        cout << 'G';
        break;
    case 3:
        cout << 'T';
        break;
    default:
        break;
    }
}