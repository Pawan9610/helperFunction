//Leetcode Weekly Contest 309 – Number of Ways to Reach a Position After Exactly k Steps
//============================================================
// nCr Program
//nCr formula = n!/r! *(n-r)!
int mod = 1e9+7;
int nCr(int n, int r){
    if(r == 0) return 1;
    vector<int> v(r+1,0);
    v[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=r; j>0; j--)
            v[j] = ((v[j] % mod) + (v[j-1] % mod)) % mod;
    }
   return v[r];
}
/*============================================================
it uses mod also to avoide such large numbers........*/
