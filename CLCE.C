#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2,c;
 float ans;
 clrscr();

 printf("enter your 2 value");
 scanf("%d%d",&n1,&n2);
 printf("1 for +\n2 for -\n3 for *\n4 for /");
 printf("enter your choice");
 scanf("%d",&c);

 if(c==1)
 {
	ans=n1+n2;
	printf("%f",ans);
 }
 else if(c==2)
 {
	ans=n1-n2;
	printf("%f",ans);
 }
 else if(c==3)
 {
	ans=n1*n2;
	printf("%f",ans);
 }
 else if(c==4)
 {
	ans=n1/n2;
	printf("%f",ans);
 }
 else
 {
	printf("invalid");
 }
 getch();
}