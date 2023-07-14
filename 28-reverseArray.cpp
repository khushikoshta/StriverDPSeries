void reverse (int start, int end, vector<int> &nums)
{
    if(start>=end)
        return;
    
    swap(nums[start],nums[end]);
    reverse(start+1, end-1, nums);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int start = 0;
    int end = n-1;
    
    reverse(start,end,nums);
    
    return nums;

}
