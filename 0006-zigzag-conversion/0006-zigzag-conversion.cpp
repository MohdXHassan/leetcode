class Solution {
public:
string convert(string s, int numRows) {
        string ans = "";
        int i = 0 ;
        int n = s.size() ;
        vector<string> vst ;
        while( i < n ){
        string temp = "" ;
        string tem = "" ;
        int j = i ; 
        for( ; i < min(j + numRows,n); i++ ){
            temp += s[i] ;
        }
        j = i ;
        for( ;i < min(j + numRows - 2,n) ; i++ ){
            tem += s[i] ;
        }
        vst.push_back(temp) ;
       
        vst.push_back(tem) ;

        }
     
       // cout << "\n" ;
       int c = vst.size() ;
      char dp[c][numRows] ;
      for( int i = 0 ; i < c ; i++ ){
      	for( int j = 0 ; j < numRows ; j++ ){
      		dp[i][j] = '0' ;
      	}
      }

int cnt = 0 ;
for(auto it : vst){
	if(cnt % 2 == 0 ){
		int l = 0 ;
   for( auto i : it){
   	dp[cnt][l] = i ;
   	l++ ;
   }


	}
	else {

		int k = numRows - 2 ;
		for(auto i:it){
			dp[cnt][k] = i ;
			k-- ;
		}
	}


cnt++ ;

}
  string an = "" ;

 // for( int i = 0 ; i < numRows; i++ ){
 //      	for( int j = 0 ; j < c ; j++ ){
 //      		cout << dp[j][i] <<" " ;
 //      	}
 //      	cout << endl ;
 //      }

  for( int i = 0 ; i < numRows ; i++ ){
      	for( int j = 0 ; j < c ; j++ ){
           if(dp[j][i] != '0') an += dp[j][i] ;
      	}
     
      }



       

      
        return an ;

    }
};