bool checkArmstrong(int n){
	//Write your code here

	//taking out digits
	int x = n;
	vector<int> digits;

	while(x>0)
	{
		int digit = x%10;

		digits.push_back(digit);

		x = x/10;
	}

	int i=0;
	int ans = 0;
	while(i<digits.size())
	{
		ans = ans + pow(digits[i],digits.size());
		i++;
	}

	if(ans == n)
		return true;
	else
		return false;
}
