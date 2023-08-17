#include<iostream>
#include<algorithm>
using namespace std;
int change(int a)
{
	int t=1;
	if (a / 10 != 0)
	{
		t++;
		a = a / 10;
	}
	return t;
}
bool cmp(int a, int b)
{
	return a > b;
}
void f()
{
	int n,t, m = 0;
	long long a[10000], b[10000];
	cin >> n;
	for (t = 0; t < n; t++)
	{
		cin >> a[t];
	}
	for (t = 0; t < n; t++)
	{
		cin >> b[t];
	}
	sort(a, a + n, cmp);
	sort(b, b + n, cmp);
	t = 0;
	while (t < n)
	{
		if (a[t] > b[t])
		{
			a[t] = change(a[t]);
			sort(a, a + n, cmp);
			t = 0;
			m++;
		}
		else if (a[t] < b[t])
		{
			b[t] = change(b[t]);
			sort(b, b + n, cmp);
			t = 0;
			m++;
		}
		else
			t++;
	}
	cout << m << endl;
}
int main()
{
	int i,t;
	cin >> i;
	while(i--)
		f();
	return 0;
}