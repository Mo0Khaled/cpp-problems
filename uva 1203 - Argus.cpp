#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
#define all(v) v.begin(),v.end()
#define loop(i, n) for (ll (i) = 0; (i)<(n); (i)++)

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

const int N = 1e6 + 7;
int mod = 1e9;
int arr[N];
int arr2[101][101];

int main() {
    init();
    priority_queue<pair<int, int>> pr;
    map<int, int> mp;
    string s;
    while (cin >> s && s[0] != '#') {
        int n, sc;
        cin >> n >> sc;
        mp[n] = sc;
        pr.push({-sc, -n});

    }
    int lg;
    cin>>lg;
    while(lg--){
        pair<int,int> p = pr.top();
        cout<<-p.second<<"\n";
        pr.pop();
        pr.push({p.first - mp[-p.second],p.second });
    }
    return 0;
}
