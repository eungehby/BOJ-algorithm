#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Member
{
    int age;
    string name;
};

void sort_mem(vector<Member> &m, int num);

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

void sort_mem(vector<Member> &m, int num)
{
    for (int i = 1; i < num; i++)
    {
        Member temp = m[i];
        int j = i - 1;

        while (j >= 0 && temp.age < m[j].age)
        {
            m[j + 1] = m[j];
            j--;
        }
        m[j + 1] = temp;
    }
}