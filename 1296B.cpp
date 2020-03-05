#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif

    ll t;
    cin>>t;
    ll n=0;
    int sum,cb, temp;
    while(t>0){
        cin>>n;
        sum=0,cb=0, temp=0;
        if(n<10)
            cout<<n<<endl;
        else{
            while(n>=10){
                temp=n/10*10;
                cb=n/10;
                sum+=temp;
                n=n-temp+cb;
            }
            sum+=n;
            cout<<sum<<endl;
        }
        t--;
    }

    return 0;
}
