#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Member
{
    int age;
    string name;
};

void sort_mem(vector<Member> m, int);

int main(void)
{
    int num;
    cin >> num;

    // 멤버 생성 후 넣기
    vector<Member> member;
    Member m;

    for (int i = 0; i < num; i++)
    {
        cin >> m.age >> m.name;
        member.push_back(m);
    }

    // 정리
    sort_mem(member, num);

    // 출력
    cout << endl;
    for (int i = 0; i < num; i++)
        cout << member[i].age << " " << member[i].name << endl;

    return 0;
}

void sort_mem(vector<Member> m, int num)
{
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j <= num; j++)
        {
            if (m[i].age > m[j].age)
            {
                Member temp = m[j];
                m[j] = m[i];
                m[i] = temp;
            }
        }
    }
}