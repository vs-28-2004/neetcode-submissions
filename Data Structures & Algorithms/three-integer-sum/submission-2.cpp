class Solution {
public:
    vector<vector<int>> bruteForce(vector<int>& nums){
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k=j+1; k<nums.size(); k++){
                    vector<int> temp;
                    if(nums[i]+nums[j]+nums[k] == 0){
                        res.insert({nums[i],nums[j],nums[k]});
                    }
                }   
            }
        }
        vector<vector<int>> ans(res.begin(), res.end());
        return ans;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        // return bruteForce(nums);

        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0; i<nums.size(); i++){
            int a = nums[i];
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int l = i+1;
            int r = nums.size()-1;

            while(l < r){
                if((a+nums[l]+nums[r]) == 0){
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l-1])
                        l++;

                    while(l < r && nums[r] == nums[r+1])
                        r--;
                }
                else if((a+nums[l]+nums[r]) < 0){
                    l++;
                }
                else {
                    r--;
                }
            } 
        }
        return res;
    }
};
