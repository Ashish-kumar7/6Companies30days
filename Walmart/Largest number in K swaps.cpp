class Solution
{
    public:
    void solve(string str , int n , int k ,string & ans , int ind ) {
        if(k==0)
          return  ;
         
         char maxi = str[ind] ;
         
         for(int i  = ind + 1 ; i< n ; i++) {
             if(maxi < str[i]) 
               maxi = str[i] ;
         }
         
         if(maxi != str[ind]) k-- ;
         
         for(int i=n-1 ; i>=0 ; i--)
         {
             if(maxi == str[i])
             {
                 swap(str[ind] , str[i]) ;
                 ans = max(ans,str) ;
                 
                 solve(str,n,k,ans,ind +1) ;
                 
                 swap(str[ind] , str[i]) ;
             }
         }
    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string ans  = str ;
       int n = str.length() ;
       solve(str,n,k,ans,0) ;
       return ans ;
    }
};