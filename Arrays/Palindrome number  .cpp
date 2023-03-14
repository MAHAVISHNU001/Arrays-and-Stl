class Solution
 {
 public:
    bool isPalindrome(int x)
    {
        int sum=x,r;
        unsigned long re=0;
     if(x>=0)
     {
      while(x!=0)
      {
        r=x%10;
        re=re*10+r;
        x=x/10;
      }
     }
    if(sum==re )
      return true;
     else
       return false;
     
        
    }
};