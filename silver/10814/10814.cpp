#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    member.reserve(num);

    for (int i = 0; i < num; i++)
    {
        Member m;
        cin >> m.age >> m.name;
        member.push_back(m);
    }

    // 정렬
    stable_sort(member.begin(), member.end(), 
    [](const Member &a, const Member &b)
                { return a.age < b.age; });

    // 출력
    for (int i = 0; i < num; i++)
        cout << member[i].age << " " << member[i].name << endl;

    return 0;
}