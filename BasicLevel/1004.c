/*
 * @Author: longyan
 * @Date: 2022-04-21 10:03:37
 */
/*
1004 成绩排名 (20 分)
读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：
每个测试输入包含 1 个测试用例，格式为

第 1 行：正整数 n
第 2 行：第 1 个学生的姓名 学号 成绩
第 3 行：第 2 个学生的姓名 学号 成绩
  ... ... ...
第 n+1 行：第 n 个学生的姓名 学号 成绩
其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。

输出格式：
对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。
*/

#include <stdio.h>
struct stu
{
    char name[11];
    char id[11];
    int score;
};
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);

    struct stu student, max, min;
    scanf("%s", &student.name);
    scanf("%s", &student.id);
    scanf("%d", &student.score);

    max = student;
    min = student;

    for (int i = 0; i < num - 1; i++)
    {
        scanf("%s", &student.name);
        scanf("%s", &student.id);
        scanf("%d", &student.score);

        if (student.score > max.score)
        {
            max = student;
        }
        if (student.score < min.score)
        {
            min = student;
        }
    }
    printf("%s %s\n", max.name, max.id);
    printf("%s %s\n", min.name, min.id);

    return 0;
}
