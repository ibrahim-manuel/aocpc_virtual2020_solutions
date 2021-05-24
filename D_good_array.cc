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

vector<string> get_all_substr(string s, int n) {
    vector<string> substrings;
    for (int i = 0; i < n; i++) {
        char temp[n - i + 1];
        int tempindex = 0;
        for (int j = i; j < n; j++) {
            temp[tempindex++] = s[j]; 
            temp[tempindex] = '\0'; 
            substrings.pub(temp);
        } 
    }
    return substrings;
}

void solve(){
    string s;
    int count = 0;
    cin >> s;
    vector <string> subs = get_all_substr(s, s.length());
    for (auto sub : subs){
        string aux = sub;
        sort(all(aux));
        auto last = unique(all(aux));
        aux.erase(last, aux.end());
        if (aux.size() == sub.size()) count ++;
    }
    cout << count << endl;   
}

int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
    
}