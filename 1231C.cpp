#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX
int main(int argc,char const * argv[]){
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    loop(i,0,n-1){
        loop(j,0,m-1){
            cin>>a[i][j];
        }
    }
    ll sum=0,cnt=0;
    loopr(i,n-1,0){
        loopr(j,m-1,0){
            if(a[i][j]==0){
                ll q=a[i][j+1]-1;
                ll w=a[i+1][j]-1;
                a[i][j]=min(q,w);
            }
            if(j+1<m && a[i][j]>=a[i][j+1]){
                sum=-1;
                cnt=1;
            }
            if(i+1<n && a[i][j]>=a[i+1][j]){
                sum=-1;
                cnt=1;
            }
        }
        
    }
    if(cnt==0){
            loop(i,0,n-1){
                loop(j,0,m-1){
                    sum+=a[i][j];
                }
            }
        }
        cout<<sum nn;
    
    return 0;
}