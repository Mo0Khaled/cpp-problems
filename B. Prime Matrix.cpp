#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
#define all(v) v.begin(),v.end()
#define loop(i, n) for (ll (i) = 0; (i)<(n); (i)++)
#define test int t; cin>> t; while(t--)
const int N = 1e5 + 7;
int mod = 1e9;
int arr[N];
int arr1[N];
int arr2[501][501];

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

vi v;

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void sieve() {
    bool prime[N + 1];

    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= N; p++)
        if (prime[p] == true)
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
    for (int p = 2; p <= N; p++)
        if (prime[p])
            v.push_back(p);
}

int main() {
    init();
    sieve();
    int n, m,mnm = N;
    map<int, int> row, col;
    cin >> n >> m;
    loop(i, n)
        loop(j, m) {
            cin >> arr2[i][j];
            auto it = lower_bound(v.begin(), v.end(), arr2[i][j]);
            arr2[i][j] = *it - arr2[i][j];
        }
    loop(i, n)
    {
        int x = 0;
        loop(j, m)
            x += arr2[i][j];
        mnm = min(mnm,x);
    }
    loop(i, m)
    {
        int x = 0;
        loop(j, n)
            x += arr2[j][i];
        mnm = min(mnm,x);
    }

    cout << mnm;
    return 0;
}


