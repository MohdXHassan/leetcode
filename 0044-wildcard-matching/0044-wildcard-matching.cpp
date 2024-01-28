class Solution {
public:
short dp[2001][2001] ;
bool fun(int i,int j ,int n ,int m , string &s,string &p  ){

if(i == n && j == m ){

	 return true ;
}

else if( i > n || j > m ) return false ;
else if(dp[i][j] != -1 ) return dp[i][j] ;
else if(p[j] != '*' && p[j] != '?' && p[j] != s[i] ) return false ;
else if(p[j] == '*' ) {
dp[i][j+1] = fun(i,j+1,n,m,s,p) ;
dp[i+1][j] = fun(i+1,j,n,m,s,p)  ;
return dp[i][j+1] || dp[i+1][j] ;
}
else if(p[j] == '?' || s[i] == p[j]){
	dp[i+1][j+1] = fun(i+1,j+1,n,m,s,p) ;
	return dp[i+1][j+1];
}
return false ;
}
    bool isMatch(string s, string p) {
        int n = s.size() ;
int m = p.size() ;

for( int i = 0 ; i <= n ; i++ ){
	for( int j = 0 ; j <= m ; j++ ) dp[i][j] = -1 ;
}
bool t = fun(0,0,n,m,s,p) ;
return  t ;
    }
};