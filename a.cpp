//This is The Coding Area
#include <bits/stdc++.h>
using namespace std;

int getCount(int n)
{

    int sum = 0;
    int count = 0;
    for (auto i = 1; i <= n; i++)
    {

        if (sum < n)
        {
            sum += i;
            count++;
        }
        else if (sum > n)
        {
            sum -= i - 1;
            count--;
        }
    }

    return count;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        cout << getCount(n) << endl;
    }

    return 0;
}