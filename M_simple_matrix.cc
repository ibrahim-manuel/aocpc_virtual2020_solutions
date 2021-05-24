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

bool is_substr(string s, string s2, int start){
    return s2 == s.substr(start, s2.size()) and !s2.empty();
}

bool is_equal(vector<string> vs, vector<string> vs2, int x_start, int y_start){
    int size = vs2.size();
    for (size_t i = y_start; i < y_start+size; i++)
        if (!is_substr(vs[i], vs2[i-y_start], x_start)) {
            return false;
            }
    return true;
}

void solve(){
    int n, m, x, y, count = 0;
    n = 0;
    cin >> m >> n;
    vector <string> vs(n);
    for (size_t i = 0; i < n; i++) cin >> vs[i];
    cin >> x >> y;
    vector <string> vs2(y);
    for (size_t i = 0; i < y; i++) cin >> vs2[i];
    for (size_t i = 0; i <= n-y; i++){
        for (size_t j = 0; j <= m-x; j++){
                if (is_equal(vs, vs2, j, i)) {
                    count++;
                    }
            }
    }
    cout << count << endl;
}

int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
}