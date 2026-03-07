// https://neetcode.io/problems/anagram-groups/question
#include <iostream>
using namespace std;

void groupAnagrams(vector<string> &strs)
{
    // well initially I was not correct of how I will store this data inside the map, the first though that came to my mind is char conr because that is what my brain thinks of whenver I have to find duplicates or find similarity in strings, but this time what will be the key and what will be the value, as a first thought I thought of pushing the chars in a map and then store that map inside another map to maintiain the count of anagrams, but I am not sure if I can even store a map inside map, and while outputting iterating over the whole map and find the key and what to output
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
