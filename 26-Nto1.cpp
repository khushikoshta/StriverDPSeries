void counting (int n, vector<int> &ans)
{
    //base case
    if(n<1)
        return;

    ans.push_back(n);
    counting(n-1,ans);
}

vector<int> printNos(int x) {
    // Write Your Code Here

    vector<int> ans;

    counting(x,ans);

    return ans;

}