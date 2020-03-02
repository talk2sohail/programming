#include <bits/stdc++.h>

using namespace std;

//naive version time O(n) space O(n) with division operator
vector<int> product(vector<int> &num)
{
    int n = num.size();
    vector<int> output(n);
    int pr = 1;
    //calculate the prodct
    for (auto i = 0; i < n; i++)
    {
        pr *= num[i];
    }
    for (auto i = 0; i < n; i++)
    {
        output[i] = pr / num[i];
    }
    return output;
}

// Space O(n^2) and Time O(n)
void product1(vector<int> &num)
{
    int n = num.size();
    vector<int> left(n);
    vector<int> right(n);

    left[0] = 1;
    right[n - 1] = 1;

    for (auto i = 1; i < n; i++)
    {
        left[i] = num[i - 1] * left[i - 1];
    }
    for (auto i = n - 2; i >= 0; i--)
    {
        right[i] = num[i + 1] * right[i + 1];
    }

    for (auto i = 0; i < n; i++)
    {

        num[i] = left[i] * right[i];
    }
}

// More optimize version: Space O(n) and Time O(n)
vector<int> product2(vector<int> const &num)
{
    int n = num.size();
    vector<int> left(n);

    //  Calculate the left product
    left[0] = 1;
    for (auto i = 1; i < n; i++)
    {
        left[i] = num[i - 1] * left[i - 1];
    }
    //  Storing the value of right product in R
    int R = 1;
    for (auto i = n - 1; i >= 0; i--)
    {
        left[i] = left[i] * R;
        R = R * num[i];
    }
    return left;
}
int main()
{

    int n;
    cin >> n;
    vector<int> num(n);
    for (auto &x : num)
        cin >> x;
    vector<int> res = product(num);
    cout << "The array ouptut: " << endl;
    for (auto &x : res)
        cout << x << " ";

    return 0;
}
