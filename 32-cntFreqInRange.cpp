vector<int> countFrequency(int n, int x, vector<int> &nums){
   
   //creating a hashArray
   vector<int> hash (n,0);

   //pre compute
   for(int i=0; i<n; i++)
   {
       hash[nums[i]-1] ++;
   }

   return hash;
}