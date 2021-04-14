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
const int N = 1e6 + 7;
int mod = 1e9;
int arr[N];
int arr2[101][101];

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


int main() {
    init();
    int n, k;
    test {
        cin >> n >> k;
        loop(i, n)arr[i] = i + 1;
        for (int i = 1; i < n; i += 2) {
            if (i % 2 != 0&&i<n-1&&k) {
                swap(arr[i], arr[i + 1]);
                k--;
            }
        }
        if(!k)loop(i,n)cout<<arr[i]<<" ";
        else cout<<-1;
        cout<<"\n";
    };
    return 0;
}
