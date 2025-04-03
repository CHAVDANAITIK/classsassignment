class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            unordered_map<int ,int> mp;
                int result=0;
                int len=1;
                int value;
    
                for(int i =0;i<nums.size();i++){
                    mp[nums[i]]++;
                }
    
    
            auto it = mp.begin(); 
            if(it!=mp.end()){
            value = it->first;
            ++it; 
          
            for (; it != mp.end(); ++it) {
                if(it->first==value+1){
                        value++;
                        len++;
                    }
                    else{
                        value=it->first;
                        result=max(result,len);
                        len=1;
                    }
                }
                  result=max(result,len);
            }
              
                return result;
               
        }
    };