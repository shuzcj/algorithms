#include<iostream>
using namespace std;

int a[505][505];
int d[505][505];
int x=-0x3f3f3f3f;//注意这是4个3f才表示无穷大
int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++)
            d[i][j]=x;//注意边界
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
            if(i!=1||j!=1)
                d[i][j]=max(d[i-1][j],d[i-1][j-1])+a[i][j];
            else d[i][j]=a[i][j];

        }

    }



    for(int i=1;i<=n;i++)
        x=max(x,d[n][i]);
    cout<<x;
    return 0;
}