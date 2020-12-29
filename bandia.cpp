#include <bits/stdc++.h>
using namespace std;
const int lm=1e6;
long long a[lm+1],d[lm+1],f[lm+1],n;
int main()
{
 scanf("%lld",&n);
 for (int i=1;i<=n;i++) scanf("%lld",&a[i]);
 d[1]=a[1];
 f[1]=a[1];
 for (int i=2;i<=n;i++)
 {
 d[i]=max(max(d[i-2],f[i-1])+a[i],d[i-1]);
 f[i]=max(f[i-2],d[i-2])+a[i];
 }
 printf("%lld",d[n]);
 return 0;
}
