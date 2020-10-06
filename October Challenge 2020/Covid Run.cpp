#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,K,X,Y;
        cin>>N>>K>>X>>Y;
        int flag=0;
        if(Y>=N)
        {
            cout<< "NO"<<endl;
        }
        else
        {
            for(int i=1; i<=N; i++)
            {
                if((X+K*i)%N==Y)
                {
                    cout<< "YES"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<< "NO"<<endl;
            }
        }
    }
}
