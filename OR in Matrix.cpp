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
const int N = 1e5 + 7;
const int bigN = 1e9 + 5;
ll mod = 1e9 + 7;
int arr[N], temp[N], arr1[N];
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

vi adj[N];
int vis[N], vid;

int q[N], qsz;
int dis[N], par[N];
int n, m;
int sz[N][27];
string str;

void countChar(int u, int p) {
    memset(sz[u], 0, sizeof sz[u]);
    sz[u][str[u] - 'a'] = 1;
    for (int v : adj[u]) {
        if (p == v) continue;
        countChar(v, u);
        for (int i = 0; i < 26; ++i)
            sz[u][i] += sz[v][i];
    }
}

void printPath(int u) {
    if (u == -1) return;
    printPath(par[u]);
    cout << u + 1 << " ";
}

bool isaCycle(int node, int p) {
    vis[node] = true;
    int retToP = 0;
    for (auto eage : adj[node]) {
        if (eage == node) {
            retToP++;
            continue;
        }
        if (vis[eage])return 1;
        if (isaCycle(eage, node))return 1;
    }
    return retToP > 1;
}

int main() {
    init();
//    freopen("max-pair.in", "r", stdin);
    int n, m;
    cin >> n >> m;
    loop(i, n)loop(j, m)cin >> matrix[i][j];
    loop(i, n)loop(j, m)matrix2[i][j] = 1;
    loop(i, n)
        loop(j, m) {
            if (!matrix[i][j]) {
                loop(x, n)matrix2[x][j] = 0;
                loop(y, m)matrix2[i][y] = 0;
            }
        };
    loop(i, n)
        loop(j, m) {
            if (matrix2[i][j]) {
                loop(x, n)matrix3[x][j] = 1;
                loop(y, m)matrix3[i][y] = 1;
            }
        };
    loop(i, n)
        loop(j, m) {
            if (matrix[i][j] != matrix3[i][j]) {
                cout << "NO";
                return 0;
            }
        };
    cout << "YES\n";
    loop(i, n) {
        loop(j, m)cout << matrix2[i][j] << " ";
        cout << "\n";
    }

    return 0;
}















