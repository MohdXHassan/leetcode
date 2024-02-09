class Solution {
public:
 #define MOD 1000000007 
    int sumOfPower(vector<int>& nums) {
  
        sort(nums.begin(),nums.end()) ;
        long long  n = nums.size() ;
        vector<long long> v ;
        v.push_back(0) ;
        for( long long i = 1 ; i < n ; i++ ){
            v.push_back((((v[i-1]% MOD) + (v[i-1]% MOD) ) % MOD + nums[i-1] % MOD) % MOD ) ;
        }  
        for( long long  i = 0 ; i < n ; i++ ){
            v[i] = (nums[i]% MOD + v[i]% MOD) % MOD ;
        }
        long long sum = 0LL ;
        for( long long i = 0 ; i < n ; i++ ){
              long long unsigned x = nums[i] % MOD ;
              x = x * x ;
               x =  (x % MOD * v[i]% MOD) % MOD ;
               sum =  (sum % MOD + x % MOD) % MOD ;

                
        }
        sum = (int)sum % MOD ;
        return sum%MOD ;

    }
};