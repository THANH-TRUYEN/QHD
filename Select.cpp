#include<bits/stdc++.h>
using namespace std;
int a[21][21];
int T[2000000];
int b[21];
int n;
long long turnOff(long long s, int j){
    return s&~(1<<j);
}
int getBit(long long s, int j)  {
    return (s >> j)&1;
}
long long getMax(long long s){
    int k=0;
    for(int j=1;j<=n;j++)
    if (getBit(s,j-1)==1){
        k++;
        b[k]=j;
    }
    int Max=0;
    for(int j=0;j<=k;j++){
        long long p=turnOff(s,b[j]-1);
        Max=max(Max,T[p]+a[k][b[j]]);
    }
    return Max;
}
long long DPBitMask(){
    long long maxS=pow(2,n)-1;
    for(int i=1;i<=maxS;i++){
        T[i]=getMax(i);
    }
    return T[maxS];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) cin>>a[i][j];
    cout<<DPBitMask();
    return 0;
}
