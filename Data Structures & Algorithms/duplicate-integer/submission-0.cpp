class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen; // create an empty hashset 
        for(int num :nums){
            if(seen.count(num)){ //check if the no. is already in the set
                return true;
            }
            seen.insert(num);
        }
        return false;
       
        }
        
};