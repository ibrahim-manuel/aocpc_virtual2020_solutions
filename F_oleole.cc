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

struct team{
    int p = 0;
    int pow = 0;
};

struct less_than_key
{
    inline bool operator() (const team& team1, const team& team2)
    {
        return (team2.p <= team1.p);
    }
};
void rs(team *t1, team *t2){
    if (t1->pow > t2->pow){
        t1->pow++;
        t2->pow--;
        t1->p+=3;  
    }
    if (t2->pow > t1->pow){
        t2->pow++;
        t1->pow--;
        t2->p+=3;  
    }
    if (t2->pow == t1->pow){
        t2->p++;
        t1->p++;
    }
}

vector <team> filter_group_stage(vector<team> teams){
    vector <team> v;
    rs(&teams[0], &teams[1]);
    rs(&teams[2], &teams[3]);
    rs(&teams[0], &teams[2]);
    rs(&teams[1], &teams[3]);
    rs(&teams[0], &teams[3]);
    rs(&teams[1], &teams[2]);
    sort(all(teams), less_than_key());
    return teams;
}

void solve(){
    vector<team> teamsa(4);
    vector<team> teamsb(4);
    for (size_t i = 0; i < 4; i++) cin >> teamsa[i].pow;
    for (size_t i = 0; i < 4; i++) cin >> teamsb[i].pow;
    teamsa = filter_group_stage(teamsa);
    teamsb = filter_group_stage(teamsb);
    rs(&teamsa[0], &teamsb[0]);
    rs(&teamsa[1], &teamsb[1]);
    sort(all(teamsa), less_than_key());
    sort(all(teamsb), less_than_key());
    if (teamsa[0].pow > teamsb[0].pow) cout << ++teamsa[0].pow << endl;
    if (teamsb[0].pow > teamsa[0].pow) cout << ++teamsb[0].pow << endl;
    if (teamsa[0].pow == teamsb[0].pow) cout << ++teamsa[0].pow << endl;
}


int main (){
    int tt;
    // scanf("%d", &tt);
    // while (tt--) 
        solve();
    
}