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

int get_le_pos(ll row[], int n){ 
    for (size_t i = 0; i < n; i++){
        if (row[i] != 1 and row[i] != 0) return -1;
        if (row[i] == 1) return i;
    }
    return -2;
}

bool check_the_col(ll matrix[][100], int n, int line,  int col){
    for (size_t i = 0; i < n; i++)
        if (matrix[i][col] != 0 and i != line) return false;
    return true;
}
void solve(){
    int n, m, prev_lead=-1, p;
    scanf("%d %d", &n, &m);
    ll matrix[n][100];
    bool non_zero_rows[n], marker, flag=true;
    for (size_t i = 0; i < n; i++) non_zero_rows[i] = false;
    for (size_t i = 0; i < n; i++){
        marker = true;
        for (size_t j = 0; j < m; j++){
            scanf("%lld", &matrix[i][j]);
            if (matrix[i][j] == 0) marker = false;
        }
        non_zero_rows[i] = marker;
    }
    for (size_t i = 0; i < n; i++){
        p = get_le_pos(matrix[i], m);
        if (p == -1) { flag=false; break; }
        if ( p == -2 and i != 0 and !non_zero_rows[i-1]) { flag=false; break; }
        if (p <= prev_lead) { flag=false; break; }
        if (!check_the_col(matrix, n, i, p)) { flag=false; break; }
        prev_lead = p;
    }
    if (flag) printf("YES\n");
    else printf("NO\n");
    
}

int main(){
    int tt;
    scanf("%d", &tt);
    while (tt--) solve();
    
}