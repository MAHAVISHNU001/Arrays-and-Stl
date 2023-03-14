class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int n=nums.size();
             
       

        for(int i=1,j=0;i<=n;i++)
        {
           
          if(nums[j]==0)
          {
            
         
           nums.push_back(nums[j]);

           nums.erase(nums.begin()+j);
          }
          else
          j++;
    
        } 
    }
};