class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
    	vector<vector<int>> result;
    	vector<int> cnums;
    	vector<bool> visited(nums.size(), false);
    	permuteHelp(nums, cnums, visited, result);
    	return result;
    }

    void permuteHelp(vector<int>& nums, vector<int>& cnums, vector<bool>& visited,vector<vector<int>> &result) {
    	if (nums.size() == cnums.size()) 
    		result.push_back(cnums);
    	else {
    		int i = 0;
    		for (i = 0; i < nums.size(); i++) {
    			if (visited[i] == false) {
    				visited[i] = true;
    				cnums.push_back(nums[i]);
    				permuteHelp(nums, cnums, visited, result);
    				
    				visited[i] = false;
    				cnums.pop_back();
    			}
    		}
    	}
    }
};