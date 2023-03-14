class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     
        int l = 1, w = *max_element(piles.begin(), piles.end());
        while (l < w) {
            int mid = (l + w) / 2;
            int g = 0;
            int lo;
            for (int p : piles) {
                lo = p / mid; 
                g+=lo;
                if(p%mid!=0)
                g++;

            }
            if (g > h) {
                l = mid + 1;
            } else {
                w = mid;
            }
        }
        return l;
    }
};