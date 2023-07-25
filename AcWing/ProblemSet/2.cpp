#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const int MAXN = 1010;
int f[MAXN][MAXN];
int v[MAXN], w[MAXN];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, V;
	cin >> N >> V;
	for (int i = 1; i <= N; i++) {
		cin >> v[i] >> w[i];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= V; j++) {
			f[i][j] = f[i - 1][j];
			if (j >= v[i]) {
				f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);
			}
		}
	}
	cout << f[N][V] << endl;

	return 0;
}
