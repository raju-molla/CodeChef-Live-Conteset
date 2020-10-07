#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        ll c=0;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }

        ll i;
        for(i= 0; i<n; i++)
        {
            if(v[i]>=k){
                c++;
                v[i+1]+=(v[i]-k);
            }
            if(v[i]<k)break;
        }
        if(i==n)
        c+=((v[n-1]-k)/k);
        cout<<c+1<<endl;
    }
}
