class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0 ; 
        int lmax =INT_MIN;
        int rmax = INT_MIN;
        int l = 0 ; 
        int r = height.size()-1;
        while(l<r){
            lmax = max(lmax,height[l]);
            rmax = max(rmax , height[r]);
            if(lmax<rmax){
                ans+=lmax-height[l];
                l++;
            }
            else{
                ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    }
};