#include<iostream>
using namespace std;

int n,v;//组数，体积
int d[105][105];//d[i][j]表示前i组，背包容积为j的情况下的最大值
int s[105];//每组有几个
int pv[105][105],pw[105][105];//第几组的第几个的数量
int main(){
    cin>>n>>v;
    
    for(int i=1;i<=n;i++){
        cin>>s[i];
        for(int j=1;j<=s[i];j++){
            cin>>pv[i][j]>>pw[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=v;j++){
            d[i][j]=d[i-1][j];//注意这个写对于分组循环的外面。。
            for(int k=1;k<=s[i];k++){
                
                if(j>=pv[i][k])
                    d[i][j]=max(d[i][j],d[i-1][j-pv[i][k]]+pw[i][k]);
            }
        }
    }
    cout<<d[n][v];
    return 0;
    
}