// https://neetcode.io/problems/top-k-elements-in-list/question

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    unordered_map<int, int> count_num;
    for (int i = 0; i < nums.size(); i++)
    {
        count_num[nums[i]]++;
    }
    // you can't do the following sorting operation in an unordered map, because pointers of unordered map are not random access, that is why we will first need to copy this into a vector of pairs
    // forgot to write return in lambda function
    vector<pair<int, int>> sorted_vec(count_num.begin(), count_num.end());
    sort(sorted_vec.begin(), sorted_vec.end(), [](const auto &p1, const auto &p2)
         { return p1.second > p2.second; });
    for (int i = 0; i < k; i++)
    {
        cout << sorted_vec[i].first << " ";
    }
}