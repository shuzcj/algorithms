#include<iostream>
using namespace std;

int n,q;
int a[100005];
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=0;i<q;i++){
        
        int x;
        cin>>x;
        
        int l=0,r=n+1;
        while(l+1!=r){
            
            int mid=l+r>>1;
            if(a[mid]<x)l=mid;
            else r=mid;
            
        }
        if(a[r]!=x){cout<<"-1 -1\n";continue;}
        else cout<<r-1<<" ";
    
        l=0,r=n+1;
        while(l+1!=r){
            
            int mid=l+r>>1;
            if(a[mid]>x)r=mid;
            else l=mid;
            
        }
        cout<<l-1<<endl;
        
        
        
        
    }
    return 0;
    
}