#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int part_num, rew_num;

    cin >> part_num >> rew_num;

    vector<int> part(part_num);
    for (int i = 0; i < part_num; i++)
    {
        cin >> part[i];
    }

    sort(part.begin(), part.end(), [](int a, int b)
         { return a > b; });

    cout << part[rew_num - 1] << endl;
    return 0;
}