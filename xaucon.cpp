#include<bits/stdc++.h> 
using namespace std; int d[10001][10001];
int main(){
ios_base::sync_with_stdio(0); string a,b;
cin>>a>>b; a=' '+a;
b=' '+b;
for(int i=1;i<a.size();i++)
for(int j=1;j<b.size();j++)
if (a[i]==b[j]) d[i][j]=d[i-1][j-1]+1;
else d[i][j]=max(d[i-1][j],d[i][j-1]);
cout<<d[a.size()-1][b.size()-1];
return 0;
}

