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
    int n, sum = 0;
    vi row, col;

    while (cin >> n && n) {
        loop(i, n) {
            sum = 0;
            loop(j, n) {
                cin >> arr2[i][j];
                sum += arr2[i][j];
            }
            if (sum % 2 != 0)
                row.push_back(i);
        }
        loop(i, n) {
            sum = 0;
            loop(j, n)sum += arr2[j][i];
            if (sum % 2 != 0)
                col.push_back(i);
        }
        if(row.size() + col.size() == 0)cout<<"OK\n";
        else if(row.size() ==  1 && col.size() == 1) cout<<"Change bit ("<<row[0]+1<<","<<col[0]+1<<")\n";
        else cout<<"Corrupt\n";
        row.clear(),col.clear();
    }

    return 0;
}
