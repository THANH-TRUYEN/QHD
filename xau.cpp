#include<bits/stdc++.h>
using namespace std;
int d[300][300];
int main(){
 ios_base::sync_with_stdio(0);
 string st;
 cin>>st;
 int n=st.size();
 for(int i=0;i<n;i++) {
 d[i][i]=1;
 if (i<n-1) {
 if (st[i]==st[i+1]) d[i][i+1]=1;
 else d[i][i+1]=2;
 }
 }
 for(int l=2;l<=n;l++){
 for(int i=0;i<n-l;i++){
 int j=i+l;
 d[i][j]=d[i][i]+d[i+1][j];
 if (st[i]==st[j] && d[i+1][j-1]==1)
d[i][j]=1;
 else
 for(int k=i+1;k<=j;k++)
 d[i][j]=min(d[i][j],d[i][k]+d[k+1][j]);
 }
 }
 cout<<d[0][n-1];
 return 0;
}
