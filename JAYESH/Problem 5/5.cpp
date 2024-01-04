#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {-1, 2, 1, -4};
    vector<int> v;
    int target = 1;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;
        int difference;
        if ((nums[i] + j + k) < target)
        {
            j++;
            difference = abs((nums[i] + j + k) - target);
            v.push_back(difference);
        }
        else if ((nums[i] + j + k) > target)
        {
            k--;
            difference = abs((nums[i] + j + k) - target);
            v.push_back(difference);
        }
    }
    int mini = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
   
}
