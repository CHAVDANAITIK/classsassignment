class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mp;
    
        vector <int> arr(2,0);
    
            for (int i = 0;; ++i) {
                int y = nums[i];
                int give = target - y;
    
                if (mp.find(give) != mp.end() ) {
                    arr[0] = mp[give];
                    arr[1]=  i;
                    break;
                }
                mp[y] = i;
            }
            return arr;
        }
    };