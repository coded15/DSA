#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n, x, y;
    cin >> n >> x >> y;
    cout << (((2 * max(x, y)) <= n) ? "YES" : "NO");
}
