class Solution {
public:
     int removeDuplicates(vector<int>& nums)
     {
        set<int>s1;
        int i;
        for(i=0;i<=nums.size()-1;i++)
        s1.insert(nums[i]);
        nums.clear();
        auto s=s1.begin();
         while(s!=s1.end())
        {
          nums.push_back(*s);
          ++s;
      
        }
        return nums.size();
  
    }

    
};