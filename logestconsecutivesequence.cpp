class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());
        int c = 1, m = 1;
        if (nums.size() == 0)
            return 0;
        for (auto it = s.begin(); it != s.end(); it++)
        {

            auto y = it;
            y++;
            if (y == s.end())
                break;
            if (*(it) + 1 == *y)
            {
                c++;
                m = max(m, c);
            }
            else
                c = 1;
        }
        return m;
    }
};