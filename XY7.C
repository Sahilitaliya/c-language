// warp of (x+y+z)2

#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,z,ans;
 clrscr();
 printf("enter x , y and z value=");
 scanf("%d%d%d",&x,&y,&z);

 ans=(x+y+z) * (x+y+z);
 printf("your ans is=%d",ans);
 getch();
}