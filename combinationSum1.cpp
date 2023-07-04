class Solution {

private:
    void storeSequence (vector<int>& candidates, int index, int target, vector<int> &seq, vector<vector<int>> &ans) {

        //base case
        if(index >= candidates.size())
        {
            if(target == 0)
                ans.push_back(seq);
            
            return;
        }

        //including element
        if(candidates[index] <= target)
        {
            seq.push_back(candidates[index]);
            storeSequence(candidates,index,target - candidates[index],seq,ans);
            seq.pop_back();
        }
        

        //excluding an element
        storeSequence(candidates,index+1,target,seq,ans);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int> seq;
        vector<vector<int>> ans;

        int index = 0;

        storeSequence(candidates,index,target,seq,ans);
        
        return ans;
    }
};