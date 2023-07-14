void fibo(vector<int> &arr, int n, int i)
{
    if(i<n)
    {
        if(i == 0)
            arr.push_back(0);

        else if(i==1)
            arr.push_back(1);
        
        else
            arr.push_back(arr[i-1]+arr[i-2]);

        i++;
        fibo(arr,n,i);
    }

    else
        return;
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.

    vector <int> arr;
    fibo(arr,n,0); //0 is index
    
    return arr;
}