#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int>a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = 0;
    int low = 0, high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(a[mid] == k)
        {
            flag = 1;
            cout << "YES " << mid << "\n";
            break;
        }
        if(a[mid] > k)
        {
            high = mid - 1;
        }
        else {
            //a[mid] < k
            low = mid + 1;
        }
    }

    if(flag == 0) cout << "NO \n";

    return 0;
}

/*
10 13
2 4 6 7 8 9 10 11 14 18
*/