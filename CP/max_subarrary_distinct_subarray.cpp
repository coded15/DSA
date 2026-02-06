#include <iostream>
using namespace std;
#include <unordered_map>

int main()
{
    // 7 3
    // 1 5 4 2 9 9 9
    int nums, k;
    cin >> nums >> k;
    int *input = new int(nums);
    int current_sum = 0, res = 0;
    for (int i = 0; i < nums; i++)
    {
        cin >> input[i];
    }
    unordered_map<int, int> count_number;
    int left = 0;
    for (int right = 0; right < nums; right++)
    {
        current_sum += input[right];
        count_number[input[right]]++;
        if (right - left + 1 > k)
        {
            count_number[input[left]]--;
            current_sum -= input[left];
            if (count_number[input[left]] == 0)
            {
                count_number.erase(input[left]);
            }
            left++;
        }
        if ((right - left + 1 == k) && (count_number.size() == k))
        {
            res = max(res, current_sum);
        }
        // if (count_number[input[right]] > 1)
        // {
        //     count_number[input[right]]--;
        //     if (count_number[input[right]] == 0)
        //     {
        //         count_number.erase(input[right]);
        //     }
        //     continue;
        // }

        // Q1: us case me kya karenge jisme initial window and final window, max_sum ke dur dur ho
        // Q2: us case me kya karenge jab hamko pahla hi valid subarray nahi mila
    }
    cout << res;
}