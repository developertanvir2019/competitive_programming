

class Solution {
	public:
		int majorityElement(vector<int>& nums) {
			unordered_map<int,int> pair;
			for(int i=0;i<nums.size();i++){
				pair[nums[i]]++;
			}
			int maxFreq=0;
			int number=-1;
		   for(const auto& freq: pair){
			 if(maxFreq<freq.second){
				maxFreq=freq.second;
				number=freq.first;
			 }
		   }
		   return number;
	
		}
	};