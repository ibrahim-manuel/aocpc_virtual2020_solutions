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

void odd_even_sort(vector<int> *v, vector<int> evens, vector<int> odds){
    int s = v->size();
    for (size_t i = 0; i < s; i++){
        if (v->at(i)%2 == 0){
            swap(v->at(i), evens.back());
            evens.pob();
        }
        else{
            swap(v->at(i), odds.back());
            odds.pob();
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vector <int> v(n), evens, odds;
    for (size_t i = 0; i < n; i++){
        cin >> v[i];
        if (v[i] % 2 == 0) evens.pub(v[i]);
        else odds.pub(v[i]);
    }
    sort(all(evens));
    sort(all(odds));
    odd_even_sort(&v, evens, odds);
    for (auto i : v) cout << i << " ";
    cout << endl;
}

int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
    
}
