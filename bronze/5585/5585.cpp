#include <iostream>
using namespace std;

int main(void)
{
    int receive, change, count = 0;
    cin >> receive;
    change = 1000 - receive;

    int num[6] = {500, 100, 50, 10, 5, 1};
    for (int i = 0; i < 6; i++)
    {
        count += change / num[i];
        change %= num[i];
    }

    cout << count << endl;

    return 0;
}