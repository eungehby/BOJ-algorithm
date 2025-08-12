#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main(void)
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    while (arr[0] != 1 || arr[1] != 2 || arr[2] != 3 || arr[3] != 4 || arr[4] != 5)
    {
        for (int i = 0; i < 4; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                for (int i = 0; i < 5; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}