// https://neetcode.io/problems/anagram-groups/question
#include <iostream>
using namespace std;

void groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> anagram;
    for (const auto &it : strs)
    {
        string temp_copy = it;
        sort(temp_copy.begin(), temp_copy.end());
        anagram[temp_copy].push_back(it);
    }
    // also maintaining a result array was better as neetcode expects us to return that vector not to print it
    for (const auto &it : anagram)
    {
        // doing (
        // while(it.size()!=0)
        // {
        //     cout << it.end() - 1 << endl;
        //     it.pop();
        // }
        // will not work because anagram is an unordered map, hence iterator of it is actually a pair of type <string, vector<string>> and pair does not have function like empty() or size() or end or pop)
        for (auto &word : it.second)
        {
            cout << word << endl;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<string> input;
    while (n--)
    {
        string s;
        cin >> s;
        input.push_back(s);
    }
    groupAnagrams(input);
}
