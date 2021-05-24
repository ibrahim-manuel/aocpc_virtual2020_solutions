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
    int n, p, c = 0, gc=0;
    cin >> n;
    vector<int> s(n);
    for (size_t i = 0; i < n; i++) cin >> s[i];
    vector<int> aux = s;
    sort(all(aux));
    auto last = unique(all(aux));
    aux.erase(last, aux.end());
    for (auto v : aux)
    {
        n=count(all(s), v)/2;
        c+=n;
    }
    cout << c/2 << endl;
}
int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
}