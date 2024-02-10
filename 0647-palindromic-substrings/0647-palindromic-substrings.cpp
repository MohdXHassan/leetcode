class Solution {
public:
bool isPalindrome(string S)
{
    
    for (int i = 0; i < S.length() / 2; i++)
    {
 
 
        if (S[i] != S[S.length() - i - 1])
        {
            // Return No
            return false ;
        }
    }
   
    return true;
}
int printSubstrings(string str)
{
 
int cnt =0 ;
    for (int i = 0; i < str.length(); i++) {
        string subStr;
        
        // Second loop is generating sub-string
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            if(isPalindrome(subStr)) cnt++ ;
        }
    }
    return cnt ;
}
    int countSubstrings(string s) {
     return printSubstrings(s) ;  
    }
};