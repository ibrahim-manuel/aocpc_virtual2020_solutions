#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define ii pair<ll,ll>
#define iii pair<ii,ll>
#define fi first
#define se second
#define debug(x) cout << #x << " is " << x << endl

#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define lb lower_bound
#define up upper_bound

void solve(){
    int n, d;
    cin >> n;
    if (n%2 == 0) cout << n/2 << " " << n/2 << endl;
    else cout << n/2 << " " <<n/2 + 1 << endl;
}

int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
}