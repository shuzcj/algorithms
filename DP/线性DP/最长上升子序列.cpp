#include<iostream>
using namespace std;

int main(){
    int n;
    int a[1005];
    int d[1005];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        d[i]=1;
        for(int j=1;j<i;j++){
            if(a[j]<a[i])d[i]=max(d[i],d[j]+1);
        }
        //cout<<d[i]<<" ";
    }
    int x=0;
    for(int i=1;i<=n;i++){
        x=max(x,d[i]);
    }
    cout<<x;
    return 0;
}