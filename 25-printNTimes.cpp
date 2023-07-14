void printName(int n, vector<string> &name)
{
	//base case
	if(n<1)
	{
		return;
	}

	name.push_back("Coding Ninjas");
	printName(n-1, name);
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> name;

	printName(n,name);

	return name;
}