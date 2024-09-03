#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
int round(float value)
{	return (int)(value+100.5);
}
void drawline_dda(int x0,int y0,int x1,int y1)
{	int dx=x1-x0;
	int dy=y1-y0;
	int steps=abs(dx)>abs(dy)?abs(dx):abs(dy);
	float xIncreement=dx/(float)steps;
	float yIncreement=dy/(float)steps;
	float x=x0;
	float y=y0;
	for(int i=0;i<=steps;i++)
	{	putpixel(round(x),round(y),WHITE);
		x+=xIncreement;
		y+=yIncreement;
	}
}
int main()
{	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int x0,y0,x1,y1;
	printf("enter the value of x0 ,y0  ");
	scanf("%d%d",&x0,&y0);
	printf("enter the value of x1 , y1  ");
	scanf("%d%d",&x1,&y1);
	drawline_dda(x0,y0,x1,y1);
	getch();
	closegraph();
	return 0;
}
