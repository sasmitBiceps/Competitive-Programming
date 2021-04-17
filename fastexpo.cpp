
const ll mod = 1e9 + 7;
// a^n in O(logn)
ll power(ll a,ll n)
{
    if(n==0)
    return(1);
    ll res=1;
    while(n)
    {
        if(n%2==1)
        {
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        n=n/2;
    }
    return(res);
}
