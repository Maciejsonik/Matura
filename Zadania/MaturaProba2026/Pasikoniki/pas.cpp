//wzorzec

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> ile(n+1);
    ile[1]=1;
    
    for (int i=1; i<=n;i++) {
        if (i+1<=n)ile[i+1]+=ile[i];
        if (i+3<=n)ile[i+3]+=ile[i];
    }
    
    for(int i=1; i<=n; i++)
        cout<<ile[i]<<" ";

}