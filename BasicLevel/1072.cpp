/*
  下图是上海某校的新学期开学寄语：天将降大任于斯人也，必先删其微博，卸其 QQ，封其电脑，夺其手机，收其 ipad，断其 wifi，使其百无聊赖，然后，净面、理发、整衣，然后思过、读书、锻炼、明智、开悟、精进。而后必成大器也！


  本题要求你写个程序帮助这所学校的老师检查所有学生的物品，以助其成大器。

  输入格式：
  输入第一行给出两个正整数 N（≤ 1000）和 M（≤ 6），分别是学生人数和需要被查缴的物品种类数。第二行给出 M 个需要被查缴的物品编号，其中编号为 4 位数字。随后 N 行，每行给出一位学生的姓名缩写（由 1-4 个大写英文字母组成）、个人物品数量 K（0 ≤ K ≤ 10）、以及 K 个物品的编号。

  输出格式：
  顺次检查每个学生携带的物品，如果有需要被查缴的物品存在，则按以下格式输出该生的信息和其需要被查缴的物品的信息（注意行末不得有多余空格）：

  姓名缩写: 物品编号1 物品编号2 ……
  最后一行输出存在问题的学生的总人数和被查缴物品的总数。
 */

// @Author:longyan
// @Date:2023-05-11

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<string> ms(7);
	for (int i = 0; i < M; i++)
	{
		cin >> ms[i];
	}
	int countStu = 0, countItem = 0;
	for (int i = 0; i < N; i++)
	{
		vector<string> item;
		string name;
		cin >> name;
		int num;
		cin >> num;
		item.push_back(name);
		for (int j = 0; j < num; j++)
		{
			string it;
			cin >> it;
			for (auto s : ms)
			{
				if (it == s)
				{
					item.push_back(it);
					countItem++;
				}
			}
		}
		if (item.size() > 1)
		{
			countStu++;
			auto last = item.end();
			last--;
			for (auto it = item.begin(); it != item.end(); ++it)
			{
				if (it == item.begin())
				{
					cout << *it << ": ";
				}
				else if (it == last)
				{
					cout << *it;
				}
				else
				{
					cout << *it << " ";
				}
			}
			cout << endl;
		}
	}

	cout << countStu++ << " " << countItem;
	return 0;
}
