#include<iostream>
#include<cmath>

using namespace std;

int f(int n, int r)
{
	int k{};
	if (n == 0 && r == 0)
		return 1;
	if (n > 0 && r >= 0 && r <= n * (k - 1) + 1)
	{
		int S1 = 0;
		for (int i = 0; i <= n * (k - 1); i++)
			S1 += f(n - 1, r - i);
		return S1;
	}
	else
		return 0;
	return f(n, r);
}

int main()
{
	int n, r, k, m, i = 0, x{};
	int t, S = 0;

	cout << "n = "; cin >> n;
	cout << "r = "; cin >> r;
	cout << "k = "; cin >> k;
	cout << "t = "; cin >> t;

	cout << "x = " << x << endl;
	cout << "f = [ " << f(n, r) << " ];" << endl;

	while (t >= 0 && t <= 10)
	{
		i <= n * (k - 1);
		m = pow(10, t);
		S += f(n, i) % m;
		i++;

		x = S;
		return x;
	}
	return 0;
}
