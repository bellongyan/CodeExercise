#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	const int Maxn = 100000;
	int N, p;
	cin >> N >> p;
	int num[Maxn];

	int M = -1, m = 999999;

	int cnt = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}

	sort(num, num + N);
	M = num[N - 1];

	for (int i = N - 1; i >= 0; i--)
	{
		m = num[i];
		if (M <= m * p)
			cnt++;
		else
			break;
	}

	cout << cnt << endl;

	return 0;
}
