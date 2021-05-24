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
//floor(log(n)) + 1 conta o numero de digitos que um numero tem

void solve(){
    int n, m, l = 1;
    cin >> n;
    vector <int> v(n);
    for (size_t i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    for (auto i : v)
    {
        if (floor(log10(i)) + 1 > l){
            m = i;
            break;
            }   
    }
    cout << m << endl;
}

int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
    
}

