#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;
#define all(v) v.begin(),v.end()
#define loop(i, n) for (int (i) = 0; (i)<(n); (i)++)
#define loop2(i, a, b) for(int i = a; i <= b; i++)
#define pb                    push_back
#define test int t; cin>> t; while(t--)
const int N = 1e7 + 7;
const int bigN = 1e9 + 5;
ll mod = 1e9 + 7;
ll arr[N], temp[N], arr1[N];
int matrix[100][100], matrix2[100][100], matrix3[100][100];
bool boolArr[N];

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll power(ll x, ll a) {
    if (a == 0) return 1;
    if (a == 1) return x;
    if (a % 2 == 0) return power((x * x) % mod, a / 2);
    return (x * power((x * x) % mod, a / 2)) % mod;
}

int main() {
    init();
//    freopen("solve.in", "r", stdin);
    int turns, t = 1, n;
    ll max1 = 0;
    string s;
    vpii oc;
    string cats[] = {"Kuro", "Shiro", "Katie"};
    cin >> turns;
    while (t <= 3) {
        map<char, ll> mp;
        cin >> s;
        n = s.size();
        loop(i, n) {
            mp[s[i]]++;
            max1 = max(max1, mp[s[i]]);
        }
        oc.push_back({max1, t});
        max1 = 0;
        t++;
    }
    for (int i = 0; i < 3; i++) {
        if (oc[i].first == n && turns == 1) oc[i].first = n - 1;
        else oc[i].first = min(n, oc[i].first + turns);
    }
    sort(oc.rbegin(), oc.rend());
    if (oc[0].first == oc[1].first)cout << "Draw";
    else cout << cats[oc[0].second - 1];

    return 0;
}




