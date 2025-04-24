// 189. Rotate Array
class Solution {
	public:
		void rotate(vector<int>& nums, int k) {
			int n=nums.size();
			vector<int> newArr;
			for(int i=n-k;i<n;i++){
				newArr.push_back(nums[i]);
			}
			for (int i = 0; i < n - k; i++) {
				newArr.push_back(nums[i]);
			}
	
			// Copy back to original array
			nums = newArr;
		}
	};