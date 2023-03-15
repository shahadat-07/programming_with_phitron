#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " iteration: \n";
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            cout << j << " step: ";
            for (int i = 0; i < n; i++)
            {
                cout << array[i] << " ";
            }
            cout << "\n";
        }
    }

    cout << "Sorted Array \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}

/*

6
7 2 13 2 11 4

*/