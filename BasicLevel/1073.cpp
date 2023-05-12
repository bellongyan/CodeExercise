/*

 */

// @Author:longyan
// @Date:2023-05-12

#include <iostream>
#include <vector>

using namespace std;

struct Problem {
	int score;
	int select;
	int correct;
	vector<string> answer;
};

int main() {
	int N, M;
	cin >> N >> M;
	vector<Problem> problemSet;
	for (int i = 0; i < M; ++i) {
		Problem p;
		cin >> p.score;
		cin >> p.select;
		cin >> p.correct;
		for (int j = 0; j < p.correct; ++j) {
			string a;
			cin >> a;
			p.answer.push_back(a);
		}
		problemSet.push_back(p);
	}

	vector<vector<string>> answerSet;
	for (int i = 0; i < N; ++i) {
		vector<string> answer;
		for (int  j = 0; j < M; ++j) {
			int n;
			scanf("(%d", &n);
			for (int k; k < n; k++) {
				string as;
				cin >> as;
				answer.push_back(as);
			}
			scanf(")");
		}
		answerSet.push_back(answer);
	}

	return 0;
}
