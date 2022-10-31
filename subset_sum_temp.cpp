int subset_sum(int a[],int n ,int w){
    
    bool dp[n+1][w+1] ;
    for(ll i=0 ; i<n+1 ; i++) dp[i][0]=true ;
    for(ll i=1 ; i<w+1 ; i++) dp[0][i]=false ;
    for (ll i=1 ; i<n+1 ; i++ ){
        for (ll j=1 ; j<w+1 ; j++){
            if (j<a[i-1]) dp[i][j]=dp[i-1][j] ;
            if (j>=a[i-1]) dp[i][j]=(dp[i-1][j] || dp[i-1][j-a[i-1]]) ;
        }
    }
    return dp[n][w] ;
}
