class Solution{
    public:
     vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int>m;
           vector<int>v;
            int t;
         for(int i=0;i<nums.size();i++){
               t = target - nums[i];
                if(m.find(t)!=m.end()){
                  v.push_back(i);
                v.push_back(m[t]);
                    return v;
                }
                else{
                 m[nums[i]] = i;
                }
            }
            return {-1,-1};
        }
    };