long reverseBits(long n) {
    
    //decimal to binary conversion
    vector<int> arr(32,0);
    
    int i = 0;
    long x = n; 
    while(x>0)
    {
        arr[i] = x%2;
        x = x/2;
        
        i++;
    }

    //reversing
    for(int i=0; i<16; i++)
    {
        swap(arr[i],arr[31-i]);   //31-i == 32-i-1
    }
    

    long ans = 0;
    for(int i=0; i<32; i++)
    {
        if(arr[i] != 0)
            ans += pow(2,i);
    }

    return ans;
}