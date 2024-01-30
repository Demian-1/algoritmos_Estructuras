class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*
        iterate through the array 
        store values in a hash set
        if the curr value is in the hash set, return true
        if we reach the end of the array, return false
        */
        int n = nums.size();
        int curr;
        unordered_set<int> hashSet; 
        for(int i=0; i<n; i++){
            curr = nums[i];
            if(hashSet.count(curr)){
                return true;
            }
            hashSet.insert(curr);
        }
        return false;
    }
};