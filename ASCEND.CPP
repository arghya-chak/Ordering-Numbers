#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int a, b, c, m, n, o;
   cout<<"Enter any three integers: \n";
   cin>>a>>b>>c;
   if (a>b && a>c)
      {
	 m=a;
	 n=(b>c)?b:c;
	 o=(b<c)?b:c;
      }
   else if (b>c && b>a)
      {
	 m=b;
	 n=(a>c)?a:c;
	 o=(a<c)?a:c;
      }
   else if (c>a && c>b)
      {
	 m=c;
	 n=(b>a)?b:a;
	 o=(b<a)?b:a;
      }
   else
      {
	 cout<<"All are equal";
      }
   cout<<"Ascending Order: "<<o<<" "<<n<<" "<<m;
   getch();
}