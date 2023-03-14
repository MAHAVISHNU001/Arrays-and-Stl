class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
    
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> p1;
        for (int i = 0; i < nums.size()-1; i++)
        {
            
            if(i==0||(nums[i]!=nums[i-1])){
            int a=-nums[i],l=i+1,h=nums.size()-1;
        
             while (l < h) 
             {
               if (nums[l]+nums[h]==a)
                {
                   vector<int>t;
                    t.push_back(nums[i]);
                    t.push_back(nums[l]);
                    t.push_back(nums[h]);
                    p1.push_back(t);
                
                   while(l<h && nums[l]==nums[l+1])l++;
                   while(l<h && nums[h]==nums[h-1])h--;
                   l++,h--;
               }
            
               else if(nums[l]+nums[h]<a)
               l++;
               else h--;
            
            }
           }
        }
        return p1;
    }
};