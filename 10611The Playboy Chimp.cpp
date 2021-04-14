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

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int gre(int start, int end, int val) {
    int mid ;
    while (start <= end) {
         mid = (start + end)  / 2;
        if (arr[mid] <= val)start = mid + 1;
        else if (arr[mid] > val) end = mid - 1;
    }
    return start;
}

int low(int start, int end, int val) {
    int mid ;
    while (start <= end) {
         mid = (start + end)  / 2;
        if (arr[mid] < val)start = mid + 1;
        else if (arr[mid] >= val) end = mid - 1;
    }
    return end;
}

int main() {
    init();
    int n;
    cin>>n;
    loop(i,n)cin>>arr[i];
    int q;
    cin>>q;
    loop(i,q){
        int x;
        cin>>x;
        if(arr[low(0,n-1,x)] >= x || !arr[low(0,n-1,x)])cout<<"X";
        else cout<<arr[low(0,n-1,x)];
        cout<<" ";
        if(arr[gre(0,n-1,x)] <= x|| !arr[gre(0,n-1,x)])cout<<"X";
        else cout<<arr[gre(0,n-1,x)];
        cout<<"\n";
    }
    return 0;
}

