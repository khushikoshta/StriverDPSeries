void counting (int x, vector<int> &ans)
{
    //base case
    if(x == 1)
    {
        ans.push_back(x);
        return;
    }

    counting(x-1,ans);
    ans.push_back(x);
}

vector<int> printNos(int x) {
    
    vector<int> ans;

    counting(x,ans);

    return ans;
}