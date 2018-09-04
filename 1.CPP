#include<iostream.h>
#include<conio.h>

int prime_chk(int l)
{	int ll=2,lll=1;
	while(ll<l)
	{	if(l%ll==0)
		{lll=0;break;}
		ll++;
	}            return lll;
}

void prime(int m,int n)
{	int x=m,y=0,z;
	while(x<=n)
	{  z=x;	y=0;while(z!=0)
		{y=y*10+z%10;z/=10;
		}
	 int i=prime_chk(x);
	 int j=prime_chk(y);
	 if(i==1&&j==1)
	 cout<<x<<"\n";
	 x++;
	 }
}

void main()
{       clrscr();
	cout<<"Program to print all numbers prime numbers within a gi\
	ven range whose reverse is also a prime :-\n\n";
	int a,b;            apple:
	cout<<"Enter a number : ";
	cin>>a;
	cout<<"Enter another number : ";
	cin>>b;
	if(a>b)
	{int t=b;b=a;a=t;}
	if(a==b||a<0)
	{cout<<"Please enter valid numbers.\nValidity :-\n*Non Nega\
	tive\n*Not equal numbers\n";
	goto apple;}
	prime(a,b);
	getch();
}