#include<iostream>
using namespace std;

int n;
int a[100005];
int p[100005];//维护该数组，该数组表示长度为i的最长上升子序列的结尾最小值
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l=0,r=1,len=1;
    p[1]=a[1];
    for(int i=2;i<=n;i++){
        l=0,r=len+1;
        while(l+1!=r){
            
            int mid=l+r>>1;
            if(p[mid]<a[i])l=mid;//check部分是为了保证你的目标存在lr范围内
            else r=mid;
            
        }
        p[l+1]=a[i];//这里用csdn的二分算法，lr是两个部分不同的数
        if(l+1>len)len=l+1;

    }

    cout<<len;
    return 0;
    
}