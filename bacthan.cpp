#include<bits/stdc++.h>
using namespace std;
const int N=100000;
const int Mod=14062008;
bool a[N+1];
long long f[N+1];
int main(){
 ios_base::sync_with_stdio(0);
 int n,k;
 cin>>n>>k;
 for(int i=1;i<=n;i++) a[i]=1;
 for(int i=1;i<=k;i++) {
 int x;
 cin>>x;
 a[x]=0;
 }
 f[0]=0, f[1]=1;
 for(int i=2;i<=n;i++)
 f[i]=a[i]*(f[i-1]+f[i-2])%Mod;
 cout<<f[n];
 return 0;
}
