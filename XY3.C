// warp of (x+y)3

#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,ans;
 clrscr();
 printf("enter x and y value=");
 scanf("%d%d",&x,&y);

 ans=(x+y) * (x+y) * (x+y);
 printf("your ans is=%d",ans);
 getch();
}