#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> char_freq;
    for (int i = 0; i < n; i++)
    {
        char_freq[s[i]]++;
    }
    int odd_char_count = 0, one_count = 0;
    for (auto it : char_freq)
    {
        cout << it.second << " ";
        if (it.second % 2 != 0 && it.second != 1)
        {
            odd_char_count++;
        }
        if (it.second == 1)
        {
            one_count++;
        }
    }
    cout << endl
         << odd_char_count << " " << one_count << endl;
    if (n % 2 == 0)
    {
        if (odd_char_count + one_count <= 2)
        {
            cout << "true";
            return 0;
        }
    }
    else
    {
        if (odd_char_count + one_count <= 3)
        {
            cout << "true";
            return 0;
        }
    }
    cout << "false";
}