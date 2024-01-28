class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size() ;
stack<pair<char,int>> stp ;
int maxi = 0 ;
for( int i = 0 ; i < n ; i++ ){
	if(stp.size() > 0 && stp.top().first == '(' && s[i] == ')') stp.pop() ;
	else stp.push({s[i],i}) ;
}


// while(stp.size() > 0 ){
// 	cout << stp.top().first  << "  " <<stp.top().second; 
// 	stp.pop() ;
// }
vector<int> res ;

while(stp.size() > 0 ){
	res.push_back(stp.top().second) ;
	cout << stp.top().first << stp.top().second << "\n" ;
	stp.pop() ;
}
 reverse(res.begin(),res.end()) ;

if(res.size() == 0 )return n ;
else {
	int l = res.size() ;
	maxi = max(maxi,res[0]) ;
	maxi = max(maxi, n - res[l-1]-1) ;
	for( int i = 1 ; i < l ; i++ ){
		maxi = max(maxi , res[i] - res[i-1] - 1 ) ;
	}
return maxi ;
}
   return maxi ;
    }
};