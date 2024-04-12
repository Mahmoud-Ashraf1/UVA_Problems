/*
 * problem link: https://codeforces.com/contest/227/problem/C
 * */

#include <bits/stdc++.h>

// Data types/structures
#define ll long long
#define ull unsigned long long
#define V vector
#define VI vector<int>
#define VLL vector<ll>
#define PII pair<int,int>
#define PLL pair<ll,ll>

// Loops/ iterators
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fr(a,target) for (int a=0;a<target;a++)
#define frl(a,target) for (ll a=0;a<target;a++)
#define frr(a,start,target) for (int a=start;a<target;a++)

// input/output
#define cin(vec) for(auto& ____ : vec) cin >> ____
#define cout(vec) for(auto& ____ : vec) cout << ____ <<" "
#define in(i) int i;cin>>i;
#define inl(i) ll i;cin>>i;
#define ins(i) string i;cin>>i;
#define cyes cout << "YES\n";
#define cno cout << "NO\n";

// Matrix graph traversals
int dx[] = {0,1,-1,0};
int dy[] = {1,0,0,-1};

using namespace std;

///////// In the name of Allah the Almighty ////////
////////////////////// Mahmoud /////////////////////

ll powMod(ll a, ll b, ll mod){
    if(b == 1) return a % mod;
    if(b == 0) return 1;
    ll x = powMod(a,b/2,mod)%mod;
    if(b&1) return ((x * x)%mod * a)%mod;
    return (x * x)%mod;
}

void Ma7moood() {
    inl(n) inl(m)

    ll ans = powMod(3,n,m)-1+m;
    cout << ans % m << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);;
    int t = 1;
//    cin >> t;
    while(t--){
        Ma7moood();
    }
}