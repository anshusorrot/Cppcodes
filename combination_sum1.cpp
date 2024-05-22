#include <bits/stdc++.h>
using namespace std;
void f(int i, int sum, vector<int> nums, vector<int> ds, int target)
{
    if (sum == target)
    {
        for (auto i : ds)
            cout << ds[i] << " ";
        cout << endl;
        return;
    }
    if (i >= nums.size())
        return;
    if (sum > target)
        return;
    ds.push_back(nums[i]);
    sum += nums[i];
    f(i, sum, nums, ds, target);
    sum -= nums[i];
    ds.pop_back();
    f(i + 1, sum, nums, ds, target);
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    int target;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> target;
    vector<int> ds;
    f(0, 0, nums, ds, target);
}