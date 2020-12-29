#include<bits/stdc++.h> 
using namespace std; int d[10001][10001];
int main(){
ios_base::sync_with_stdio(0); 
string a,b;
cin>>a>>b; d[0][0]=(a[0]!=b[0]);
for(int i=1;i<a.size();i++) d[i][0]=d[i-1][0]+1;
for(int i=1;i<b.size();i++) d[0][i]=d[0][i-1]+1;
for(int i=1;i<a.size();i++)
for(int j=1;j<b.size();j++)
if (a[i]==b[j]) d[i][j]=d[i-1][j-1];
else
d[i][j]=min(d[i-1][j],min(d[i][j-1],d[i-1][j-1]))+1; cout<<d[a.size()-1][b.size()-1];
return 0;
}

