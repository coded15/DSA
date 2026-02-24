// https://neetcode.io/problems/is-anagram/question?list=neetcode150

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> count_s;
        unordered_map<char, int> count_t;
        int s_length = s.size();
        int t_length = t.size();
        for (int i = 0; i < s_length; i++)
        {
            count_s[s[i]]++;
        }
        for (int i = 0; i < t_length; i++)
        {
            count_t[t[i]]++;
        }
        if (count_s.size() != count_t.size())
        {
            return false;
        }
        for (auto it : count_s)
        {
            if (count_t[it.first] != it.second)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s, t;
    cin >> s >> t;
    cout << (sol.isAnagram(s, t) ? "YES" : "NO");
}
