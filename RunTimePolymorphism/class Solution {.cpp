class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
         
            if(nums[i]!=nums[i+1] && cnt==0){
                j=i;
            break;
        }
           else if(nums[i]==nums[i+1])
                cnt++;
          
             else if(nums[i]!=nums[i+1])
                cnt=0;
          
            
          
            
            
            
        }
    }
};