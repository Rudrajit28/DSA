class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int sum=arr[i]+arr[j];
                if(sum==target){
                   return {i,j}; 
                    
                }


            }
        }
        return {};
    }

};