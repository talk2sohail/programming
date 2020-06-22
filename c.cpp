#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define lli long long int
#define vll vector<lli>

// nC2
lli getNumberOfPosibleCombination(lli n)
{
    return n * (n - 1) / 2;
}

// count of collisions
unordered_map<long, long> getCountOfDifferentCombination(vll nums)
{
    unordered_map<long, long> counts;
    for (int i = 0; i < nums.size(); i++)
    {
        if (counts.find(nums[i]) != counts.end())
        {
            counts[nums[i]] += 1;
        }
        else
        {
            counts.insert(make_pair(nums[i], 1));
        }
    }

    return counts;
}

lli getTime(lli x, lli y, lli v)
{
    //creates problem if the quotient is a float
    return sqrt(x * x + y * y) / v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n;
    cin >> n;

    vll timeVector;

    // if sqrt is O(logn) then O(N*logN)
    while (n--)
    {

        lli a, b, c;
        cin >> a >> b >> c;
        timeVector.push_back(getTime(a, b, c));
    }
    // O(n)
    unordered_map<long, long> counts = getCountOfDifferentCombination(timeVector);

    auto it = counts.begin();
    lli sum = 0;
    while (it != counts.end())
    {
        if (it->second >= 2)
        {
            sum += getNumberOfPosibleCombination(it->second);
        }

        it++;
    }

    cout << sum << endl;
}
