#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
#define ff first
#define ss second
void sol()
{
    int n;
    string s;
    cin >> n >> s;
    vector<ll> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        v[i] = s[i - 1] - '0' - 1;
    }
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
    }
    map<ll, ll> m;
    long long ans = 0;
    for (int i = 0; i <= n; i++)
    {
        m[v[i]]++;
    }
    for (auto j : m)
    {
        ans += j.ss * (j.ss - 1) / 2;
    }
    cout << ans << "\n";
}
int main()
{
    ll t;
    cin>>t;
    while(t-->0){
        sol();
    }
}