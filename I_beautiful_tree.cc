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
    int n, q, u, v, val, mult;
    cin >> n;
    vector <ii> nodes(n);
    for (int i = 0; i < n; i++) cin >> nodes[i].fi;
    
    for (int i = 0; i < n-1; i++){
        cin >> u >> v;
        nodes[v-1].se = u-1;
    }
    cin >> q;
    vector <ii> querys(q);
    for (int i = 0; i < q; i++){
        cin >> u >> val;
        querys[i].fi = u-1; querys[i].se = val;
    }
    ii node;
    for (auto query : querys){
        u = query.fi;
        node = nodes[u];
        mult = node.fi;
        while (true){
            if (mult >= query.se) break;
            if (u == 0) break;
            u = node.se;
            node = nodes[u];
            mult *= node.fi;
        }
        if (mult > query.se || mult < query.se) cout << "-1\n";
        else cout << u+1 << endl;   
    } 
}

int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
}