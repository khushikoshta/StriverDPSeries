//50 tests cases
int sumFirstN(int n) {
    // Write Your Code Here

    return (n*(n+1)/2);
}

//49 test cases
int calculateSum (int n, int sum)
{
    //base case
    if(n<1)
        return sum;
    
    sum += n;
    calculateSum(n-1, sum);
}

int sumFirstN(int n) {
    
    int sum = 0;
    int ans = calculateSum(n,sum);

    return ans;
}