bool Palindrome (int s, int e, string&str)
{
    if(s>e)
        return 1;


    if(str[s] == str[e])
        Palindrome(s+1, e-1, str);

    else
        return 0;
}
bool isPalindrome(string& str) {
    
    // Write your code here.

    int start=0; 
    int end = str.length() - 1;

    return Palindrome(start,end,str);
   
}
