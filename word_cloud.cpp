#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define lli long long int
#define vi vector<int>

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
void sort_by_sec(pair<string, int> &a, pair<string, int> &b){};

void print_mat(vector<vi> &a)
{
    for (auto i = 0; i < (int)a.size(); i++)
    {
        for (auto j = 0; j < (int)a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
class WordCloudData
{
private:
    unordered_map<string, size_t> wordsToCounts_;

    void populateWordsToCounts(const string &inputString)
    {
        // count the frequency of each word
    }

    static string toLowerCase(const string &word)
    {
        string result = word;
        transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    }
    void addWordToHashMap(const string &word)
    {

        //make the word lowercase itself
        string lowerCasedWord = toLowerCase(word);

        // if the word is already in the hash map we increment its count
        auto it = wordsToCounts_.find(lowerCasedWord);
        if (it != wordsToCounts_.end())
        {
            ++it->second;
        }

        // if a lowercase version is in the hash map,
        // we know our input word must be uppercase
        // but we only include uppercase words if they're always uppercase
        // so we just increment the lowercase version's count
        else if ((it = wordsToCounts_.find(toLowerCase(word))) != wordsToCounts_.end())
        {
            ++it->second;
        }

        // if an uppercase version is in the hash map,
        // we know our input word must be lowercase.
        // since we only include uppercase words if they're always uppercase,
        // we add the lowercase version and give it the uppercase version's count
        else if ((it = wordsToCounts_.find(capitalize(word))) != wordsToCounts_.end())
        {
            size_t newCount = it->second + 1;
            wordsToCounts_.erase(it);
            wordsToCounts_.insert(make_pair(word, newCount));
        }

        // otherwise, the word is not in the hash map at all, lowercase or uppercase
        // so we add it to the hash map
        else
        {
            wordsToCounts_.insert(make_pair(lowerCasedWord, 1));
        }
    }

public:
    WordCloudData(const string &inputString)
    {
        populateWordsToCounts(inputString);
    }

    const unordered_map<string, size_t> getWordsToCounts() const
    {
        return wordsToCounts_;
    }
};

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}

