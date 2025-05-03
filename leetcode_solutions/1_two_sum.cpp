class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            unordered_map<int, int> hash_table;
            for(int i=0; i<nums.size(); i++){
                int second_int = target - nums[i];
                if(hash_table.find(second_int)!=hash_table.end()){
                    result.push_back(hash_table.at(second_int));
                    result.push_back(i);
                    break;
                }
                else{
                    hash_table.insert({nums[i], i});
                }
            }
            return result;
        }
    };