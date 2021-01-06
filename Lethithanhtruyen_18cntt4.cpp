#include "windows.h"
#include <iostream>
#include <conio.h>
#include <math.h>

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
void Baitap0()
{
  	system("cls");
  	int N=100000;
	int Mod=14062008;
	bool a[N+1];
	long long f[N+1];
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
  	getch();    
}

void Baitap1()
{
  	system("cls");
  
  	getch();    
}

void Baitap2()
{
  	system("cls");
   
  	getch();    
}

void Baitap3()
{
  	system("cls");
  
  	getch();  	
}

void Baitap4()
{
  	system("cls");
 
  	getch();  	
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
  int x0=5,y0=5,chon=0,luuchon,sodong=7,ok=FALSE;
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
		 case 3:
			Baitap3();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 4:
			Baitap4();
			Ve_menu(x0,y0,chon,sodong,st);
			break;
		 case 5: exit(0);
		}
	  ok=FALSE; //tra lai trang thai ENTER chua duoc nhan
	}
  }
  while (ch!=27);//Nhan phim ESC de thoat khoi chuong trinh
}
