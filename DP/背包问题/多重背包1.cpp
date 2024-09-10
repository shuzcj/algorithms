#include<iostream>
using namespace std;

int d[105][105];
int pv[105],pw[105],pn[105];
int main(){
    int n,v;
    cin>>n>>v;
    for(int i=1;i<=n;i++){
        cin>>pv[i]>>pw[i]>>pn[i];
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=v;j++){
            d[i][j]=d[i-1][j];
            for(int k=1;k<=pn[i];k++){

                if(j>=k*pv[i])
                    d[i][j]=max(d[i][j],d[i-1][j-k*pv[i]]+pw[i]*k);
            }
        }
    }
    cout<<d[n][v];
    return 0;
}