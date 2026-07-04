class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>res(n,-1);
        unordered_map<int,int>mp;
        stack<int>s;
        for(int i =m-1;i>=0; i--){
           while(s.size()>0&&s.top()<nums2[i]){
            s.pop();
           }
           if(s.size()>0){
             mp[nums2[i]]=s.top();
           }
           else{
            mp[nums2[i]]=-1;
           }
           s.push(nums2[i]);
        }
        for(int i = 0 ; i < nums1.size();i++){
             res[i]=mp[nums1[i]];
        }
        return res;
    }
};