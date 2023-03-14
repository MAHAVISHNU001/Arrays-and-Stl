class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0,i;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for( i=0;i<=n-1;i++)
        {
        if(nums[i]==x)
        ++x;
        else
       break;
        }
         return i;
    }
 };
       
