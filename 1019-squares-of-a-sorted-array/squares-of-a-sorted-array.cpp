class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int start=0;
        int end=ans.size()-1;
        for(int k=ans.size()-1; k>=0; k--){
            if(abs(nums[end])>abs(nums[start])){
                ans[k]=nums[end]*nums[end];
                end--;
            }
            else{
                ans[k]=nums[start]*nums[start];
                start++;
            }
        }
        return ans;
    }
};