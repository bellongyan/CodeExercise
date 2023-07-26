#include<iostream>
#include<algorithm>

using namespace std;

const int MAXN = 50;
int score[MAXN];

bool comp(int a, int b) {
	return a > b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> score[i];

	sort(score, score + n, comp);

	int count = 0;
	while (score[count] >= score[k - 1]) {
		if (score[count] == 0) break;
		count++;
	}
	cout << count << endl;
	
	return 0;
}
