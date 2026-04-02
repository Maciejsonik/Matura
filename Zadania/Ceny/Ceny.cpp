#include <iostream>
#include <string>
using namespace std;

double binToDec(string s)
{
    double wyn = 0;
    int p = 1;
    int x = s.size();
    
    for (int i = x - 4; i >= 0; i--) {
        if (s[i] == '1')
            wyn += p;
        p = p * 2;
    }
    if (s[x - 2] == '1')
        wyn += 0.5;
    if (s[x - 1] == '1')
        wyn += 0.25;

    return wyn;
}

int main() {
    string s;
    cin >> s;
    cout << binToDec(s) << '\n';
}