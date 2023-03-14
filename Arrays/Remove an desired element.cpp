class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        for(int i=1,j=0;i<=n;i++)
        {

            if(nums[j]==val)
            {  
              auto itr=nums.begin()+j;
                nums.erase(itr);
            }
            else
            j++;
           
        }
        return nums.size();
    }
};
