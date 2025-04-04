class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
    
             unordered_map<int,int>m;
               vector<int>v(k);
                for(int i=0;i<nums.size();i++){
                    m[nums[i]]++;
               } 
               multimap< int,int>f;
               for(auto [p,q] : m){
            f.insert({ q,p});
               }
               int i=0;
               for(auto [p,q] : f){
              v[i] = q;
              i++;
                if(i==k) i=0;
               }
               return v;
    
            
        }
    };