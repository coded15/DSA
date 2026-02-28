// https://www.codechef.com/problems/MINDIS6?tab=statement

/*
Hmm so many things to say about this problem
1. MOST IMP: HASHMAP DOESN'T STORE THE ELEMENTS IN THE ORDER IN WHICH IT IS INPUTTED
2. make sure that you are not using the variable that you are modifying inside the loop in the condition of a the loop itself in anyway
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> count_int;
        int first;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == 0)
            {
                first = x;
            }
            count_int[x]++;
        }
        int distict_elements = count_int.size();
        count_int.erase(first);
        vector<int> counts;
        for (auto it : count_int)
        {
            // cout << it.second << " ";
            counts.push_back(it.second);
        }
        sort(counts.begin(), counts.end());
        for (int i = 0; i < distict_elements - 1 && k > 0; i++)
        {
            if (k >= counts[i])
            {
                k -= counts[i];
                distict_elements--;
            }
            else
                break;
        }
        cout << distict_elements << endl;
    }
}