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

bool can_win(int r,  vector <int> *m_t, int max){
    if (max >= r){
        for (auto v =  m_t->begin(); v != m_t->end(); v++)
        {
            if (*v >= r){
                v = m_t->erase(v);
                return true;
            }
        }
    }
    return false;
}

void solve(){
    int n, m, c=0;
    cin >> n >> m;
    vector <int> m_t (n);
    vector <int> o_t (m);
    for (size_t i = 0; i < n; i++) cin >> m_t[i];
    for (size_t i = 0; i < m; i++) cin >> o_t[i];
    sort(all(m_t));
    int max = m_t[n-1];
    for (auto &&r : o_t)
    {
        if(can_win(r, &m_t, max)) c++;
        cout << c << " ";
        max = m_t[m_t.size()-1];
    }
    cout << endl;
}

int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
}