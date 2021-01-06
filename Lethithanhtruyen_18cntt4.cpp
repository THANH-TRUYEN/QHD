#include "windows.h"
#include <iostream>
#include <conio.h>
#include <math.h>
#include<vector>

struct so{
	int chuc,donvi;
};
using namespace std;

#ifdef WIN32
void gotoxy(int x, int y)
{
  COORD cur = {x, y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
} 
#else
void gotoxy(int x, int y)
{
  printf("\033[%dG\033[%dd", x+1, y+1);
}
#endif

int textcolor(int Color)
{
  HANDLE h;
  h = GetStdHandle(STD_OUTPUT_HANDLE); 
  return SetConsoleTextAttribute(h, Color);
}

#define CYAN 10
#define YELLOW 14
// baitoanbacthang
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
//bai toan ban dia
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
//xau palindrome
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
//bien doi xau a thanh xau b
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
//select
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
//Viet xau s ra man hinh tai toa do (x,y) voi mau la color
void Write(char *s,int x,int y, int color)
{
  textcolor(color);
  gotoxy(x,y); cout<<s;
  textcolor(15);
}

void Khung(int x1,int y1,int x2,int y2)
{ int x,y;
  gotoxy(x1,y1); cout<<"É";
  gotoxy(x2,y1); cout<<"»";
  gotoxy(x1,y2); cout<<"È";
  gotoxy(x2,y2); cout<<"¼";
  for(x=x1+1;x<x2;x++)
	 {
		gotoxy(x,y1); cout<<"Í";
		gotoxy(x,y2); cout<<"Í";
	 }
  for(y=y1+1;y<y2;y++)
	 {
		gotoxy(x1,y); cout<<"º";
		gotoxy(x2,y); cout<<"º";
	 }
}
/*Tao ra menu tai toa do (x0,y0) voi n dong luu trong bien s
chon: dong menu hien thoi (khac mau voi cac dong khac) */
void Ve_menu(int x0,int y0,int chon,int n,char *s[])
{
  system("cls");
  Khung(x0-2,y0-1,x0+35,y0+n);
  for(int i=0;i<n;i++)
	 if(i==chon) Write(s[i],x0,y0+i,CYAN);
	 else Write(s[i],x0,y0+i,YELLOW);
  Write("Copyright (c) 2019 by Pham Anh Phuong.",x0-4,y0+n+5,10);
  Write("Sinh vien thuc hien:",x0+40,y0,14);
  Write("1. Le Thi Thanh Truyen",x0+40,y0+1,14);
  Write("2. DO AN CHUYEN NGANH",x0+40,y0+2,14);
  Write("3.	Lop: 18CNTT4 ",x0+40,y0+3,14);

}

main()
{
  char ch,*st[20]; //Ghi cac dong menu
  system("cls");
  st[0]="1.Bai toan bac thang";
  st[1]="2.Bai toan choi ban dia";
  st[2]="3.Bai toan ve xau Palindrome";
  st[3]="4. Bai toan bien doi xau a thanh xau b";
  st[4]="5. SELECT";
  st[5]="<ESC> Ket thuc chuong trinh!";
  int x0=5,y0=5,chon=0,luuchon,sodong=4,ok=FALSE;
  Ve_menu(x0,y0,chon,sodong,st);
  do
  {
  ch=getch(); //Nhan mot phim
  switch (ch)
	{
		case 72: //phim len
			luuchon=chon;
			chon--;
			if(chon<0) chon=sodong-1;
			Write(st[luuchon],x0,y0+luuchon,YELLOW);
			Write(st[chon],x0,y0+chon,CYAN);
			break;
		case 80://phim xuong
			luuchon=chon;
			chon++;
			if(chon==sodong) chon=0;
			Write(st[luuchon],x0,y0+luuchon,YELLOW);
			Write(st[chon],x0,y0+chon,CYAN);
			break;
		case 13: //phim ENTER
		ok=TRUE; break;
	}
	if (ok==TRUE) //Neu phim ENTER duoc nhan
	{
	  switch (chon)
		{
		 case 0:
			Baitap0();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 1:
			Baitap1();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 2:
			Baitap2();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 3: exit(0);
		}
	  ok=FALSE; //tra lai trang thai ENTER chua duoc nhan
	}
  }
  while (ch!=27);//Nhan phim ESC de thoat khoi chuong trinh
}
