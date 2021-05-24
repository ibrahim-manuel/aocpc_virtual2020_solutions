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

string subsequence(string s, int binary, int len){
	string sub = "";
	for (int j = 0; j < len; j++)
		if (binary & (1 << j))
			sub += s[j];
	return sub;
}
vector<string> possibleSubsequences(string s){
	vector <string> subseuqencias;
	int len = s.size();
	int limit = pow(2, len);
	for (int i = 1; i <= limit - 1; i++) { 
		string sub = subsequence(s, i, len);
        subseuqencias.pub(sub);
	}
    return subseuqencias;
}

void solve(){
    int n, q, l, r, max = 0;
    string s;
    cin >> n >> q;
    cin >> s;
    vector<pair <int, int>> querys(q);
    for (auto &&i : querys) cin >> i.first >> i.second;
    for (auto q : querys){
        string aux = s.substr(q.first, q.second - q.first+1);
        vector <string> s_i_subsequence = possibleSubsequences(aux);
        for (auto ss : s_i_subsequence){
            if (is_sorted(all(ss)) && ss.size() > max) max = ss.size();
        }
        cout << max << endl;
        max = 0;
    } 
}

int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
}