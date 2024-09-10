#include<iostream>
#include<algorithm>
using namespace std;

int v[1005],w[1005];
int d[1005][1005];

int main(){

    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        cin>>v[i]>>w[i];
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(v[i]<=j)
                d[i][j]=max(d[i-1][j],d[i][j-v[i]]+w[i]);
            else
                d[i][j]=d[i-1][j];
        }
    }

    cout<<d[m][n];
    return 0;
}
