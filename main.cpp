#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n, a=0, b=0 ,c=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a += temp;
    }
    for (int i = 0; i < n-1; i++){
        int t; 
        cin >> t;
        b+= t;
    }
    for ( int i = 0 ; i < n - 2; i++){
        int t; 
        cin >> t;
        c += t;
    }
    cout << a - b << endl;
    cout << b - c << endl;
}