#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct people
{
	int id;
	int score;
};

int main()
{
	vector<people> person;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		people p;
		cin >> p.id >> p.score;
		person.push_back(p);
	}

	int score[10] = {0};
	while (!person.empty())
	{
		score[person.back().id] += person.back().score;
		person.pop_back();
	}

	int index = 0;
	int m = 0;
	for (int i = 0; i < 10; i++)
	{
		if (score[i] > m)
		{
			m = score[i];
			index = i;
		}
	}

	cout << index << " " << m << endl;

	return 0;
}
