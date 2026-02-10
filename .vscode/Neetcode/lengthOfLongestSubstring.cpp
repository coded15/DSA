// https://neetcode.io/problems/longest-substring-without-duplicates/question

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.size() == 0)
    {
        return 0;
    }
    int l = 0, r = 1;
    int length = s.size();
    unordered_map<char, int> count_char;
    count_char[s[l]]++;
    // set the result value as 1 intially because you have already inserted one char
    int res = 1;
    int current_length = 1;
    for (; l < length && l < r && r < length;)
    {
        if (count_char[s[r]] == 0)
        {
            count_char[s[r]]++;
            r++;
            current_length++;
            res = max(res, current_length);
        }
        else
        {
            // CAN'T CHANGE L TO R, BUT L SHOULD BE INCREASED ONE BY ONE
            l++;
            r = l + 1;
            // pop all elements in count_char; Learn this clear method
            count_char.clear();
            count_char[s[l]]++;
            // Dont forget to reset the following count
            current_length = 1;
        }
    }
    cout << res;
}