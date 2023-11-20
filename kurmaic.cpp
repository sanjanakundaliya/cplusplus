#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
	int n;
	cin >> n;
	ll y[n];
	ll z[n];
	for (int i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		y[i] = x;
		z[i] = x;
	}
	sort(y, y + n);
	for (int a = 1; a < n; a++)
	{
		z[a] += z[a - 1];
		y[a] += y[a - 1];
	}
	ll m;
	cin >> m;
	for (int a = 1; a <= m; a++)
	{
		int opt, l, r;
		cin >> opt >> l >> r;
		l--; r--;
		if (opt == 1) {
			if (l == 0) {
				cout << z[r] << "\n";
			}
			else {
				cout << z[r] - z[l - 1] << "\n";
			}
		}
		else {
			if (l == 0) {
				cout << y[r] << "\n";
			}
			else {
				cout << y[r] - y[l - 1] << "\n";
			}
		}
	}

	return 0;
}