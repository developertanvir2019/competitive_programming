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


	// mx profit

	/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let minPz=prices[0];
    let mxProfit=0;
    for(let i=1;i<prices.length;i++){
        const profit=prices[i]-minPz;
        if(profit>mxProfit){
            mxProfit=profit;
        }
        if(minPz>prices[i]){
            minPz=prices[i];
        }
        
    }
    return mxProfit;
};