#include<iostream>
using namespace std;
int n,v;
int d[1005][1005],t[1005],w[1005];
int main(){
    cin>>n>>v;
    for(int i=1;i<=n;i++){
        cin>>t[i]>>w[i];
    }



    for(int i=1;i<=n;i++){
        for(int j=1;j<=v;j++){
            if(t[i]>j)d[i][j]=d[i-1][j];
            else{
                d[i][j]=max(d[i-1][j-t[i]]+w[i],d[i-1][j]);
            }
        }
    }

    cout<<d[n][v];

    return 0;

}