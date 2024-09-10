#include<iostream>
using namespace std;

int n,m;
char a[1005],b[1005];
int d[1005][1005];
int main(){
    cin>>n>>a+1>>m>>b+1;
    for(int i=0;i<=n;i++){
       
        d[i][0]=i;
    }
    for(int i=0;i<=m;i++)d[0][i]=i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            d[i][j]=min(d[i-1][j],d[i][j-1])+1;
            if(a[i]==b[j])d[i][j]=min(d[i][j],d[i-1][j-1]);
            else d[i][j]=min(d[i][j],d[i-1][j-1]+1);
            
            
        }
    }
    cout<<d[n][m];
    return 0;
    
}