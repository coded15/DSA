// https://neetcode.io/problems/car-fleet/question
#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> position;
    vector<int> speed;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        position.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        speed.push_back(x);
    }

    int answer = n;
    for (int i = 0; i < n - 1; i++)
    {
        if (speed[i] > speed[i + 1])
        {
            int relative_speed = speed[i] - speed[i + 1];
            double front_car_target_time = (target - position[i + 1]) / speed[i + 1];
            double time_to_catup_up = position[i + 1] - position[i] / relative_speed;
            if (time_to_catup_up <= front_car_target_time)
            {
                --answer;
            }
        }
    }
    cout << answer;
}
