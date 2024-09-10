#include<iostream>
using namespace std;
char a[1005],b[1005];
int d[1005][1005];
int main(){
    int n,m;
    cin>>n>>m;
    cin>>a+1>>b+1;
    //cout<<a<<b;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i]==b[j])
                d[i][j]=d[i-1][j-1]+1;
            else
                d[i][j]=max(d[i-1][j],d[i][j-1]);
        }
    }
    cout<<d[n][m];
    return 0;
    
    
}