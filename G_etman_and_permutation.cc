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
#define all(x) x.begin(), x.end()

#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define lb lower_bound
#define up upper_bound

void solve(){
    int n, c=0;
    cin >> n;
    vector <int> p(n);
    for (size_t i = 0; i < n; i++) cin >> p[i];
    for (size_t i = 0; i < n; i++) if (p[i] == i+1) c++;
    cout << ceil(double(c/2)) << endl;
}

int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
    
}