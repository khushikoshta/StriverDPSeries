class Solution {

private:
    void findCombinations(int index, int n, int sum,vector<int> arr,vector<vector<int>> &ans, vector<int> &output)
    {
        //base  case
        if(index >= n)
        {
            if(sum == 0)
                ans.push_back(output);
        
            return;
        }

        //including an element
        if(arr[index] >= sum)
        {
            output.push_back(arr[index]);
            index = index + 1;
            sum = sum - arr[index];
            findCombinations(index, n, sum, arr, ans, output);
            output.pop_back();
        }

        //exclude an element
        findCombinations(index+1, n, sum, arr, ans, output);
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> output;

        int index = 0;
        int n = candidates.size();

        findCombinations(index, n, target, candidates, ans, output );

        return ans;

    }
};