// warp of (x+y)2

#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,ans;
 clrscr();
 printf("enter of x:");
 scanf("%d",&x);

 printf("enter of y:");
 scanf("%d",&y);

 ans=(x+y) * (x+y);
 printf("x=%d\ny=%d",ans);
 getch();
}