#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
int roll();
void main()
{
int i,j=0,gd=DETECT,gm;
int n;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
setbkcolor(4);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
setcolor(3);
outtextxy(130,224,"WELCOME TO THE GAME OF LUDO");
int b;
for(j=20;j<70;j+=10)
{
setcolor(GREEN);
circle (100,80,j);
delay(100);
}
for(j=20;j<70;j+=10)
{
setcolor(GREEN);
circle (300,100,j);
delay(100);
}
for(j=20;j<70;j+=10)
{
setcolor(GREEN);
circle (500,80,j);
delay(100);
}
for(j=20;j<70;j+=10)
{
setcolor(GREEN);
circle (570,250,j);
delay(100);
}
for(j=20;j<70;j+=10)
{
setcolor(GREEN);
circle (60,250,j);
delay(100);
}
for(j=20;j<70;j+=10)
{
setcolor(GREEN);
circle (100,395,j);
delay(100);
}
for(j=20;j<70;j+=10)
{
setcolor(GREEN);
circle (300,415,j);
delay(100);
}
for(j=20;j<70;j+=10)
{
setcolor(GREEN);
circle (500,395,j);
delay(100);
}
	for(j=20;j<70;j+=10)
	{
	setcolor(YELLOW);
	circle (500,395,j);
	delay(100);
	}
	for(j=20;j<70;j+=10)
	{
	setcolor(YELLOW);
	circle (300,415,j);
	delay(100);
	}
	for(j=20;j<70;j+=10)
	{
	setcolor(YELLOW);
	circle (100,395,j);
	delay(100);
	}
	for(j=20;j<70;j+=10)
	{
	setcolor(YELLOW);
	circle (60,250,j);
	delay(100);
	}
	for(j=20;j<70;j+=10)
	{
	setcolor(YELLOW);
	circle (570,250,j);
	delay(100);
	}
	for(j=20;j<70;j+=10)
	{
	setcolor(YELLOW);
	circle (500,80,j);
	delay(100);
	}
	for(j=20;j<70;j+=10)
	{
	setcolor(YELLOW);
	circle (300,100,j);
	delay(100);
	}
	for(j=20;j<70;j+=10)
	{
	setcolor(YELLOW);
	circle (100,80,j);
	delay(100);
	}
		for(j=20;j<70;j+=10)
		{
		setcolor(BLUE);
		circle (100,80,j);
		delay(100);
		}
		for(j=20;j<70;j+=10)
		{
		setcolor(BLUE);
		circle (300,100,j);
		delay(100);
		}
		for(j=20;j<70;j+=10)
		{
		setcolor(BLUE);
		circle (500,80,j);
		delay(100);
		}
		for(j=20;j<70;j+=10)
		{
		setcolor(BLUE);
		circle (570,250,j);
		delay(100);
		}
		for(j=20;j<70;j+=10)
		{
		setcolor(BLUE);
		circle (60,250,j);
		delay(100);
		}
		for(j=20;j<70;j+=10)
		{
		setcolor(BLUE);
		circle (100,395,j);
		delay(100);
		}
		for(j=20;j<70;j+=10)
		{
		setcolor(BLUE);
		circle (300,415,j);
		delay(100);
		}
		for(j=20;j<70;j+=10)
		{
		setcolor(BLUE);
		circle (500,395,j);
		delay(100);
		}
		getch();
graphdefaults();
clearviewport();
setbkcolor(BLACK);
setviewport(0,0,670,440,1);
setcolor(5);
setcolor(9);
outtextxy(10,10,"ENTER THE NO OF PLAYERS (LESS THAN 2)");
cout<<"\n"<<"\n";
cin>>n;
int a;
a=n;
clearviewport();
setcolor(5);
rectangle(440,280,210,190);
outtextxy(300,238,"HOME");
outtextxy(200,160,"PRESS R TO ROLL AND E TO EXIT");
delay(100);
if(n<=4)
{
setcolor(GREEN);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(287,415,"START");
rectangle(275,370,375,470);
delay(100);
circle(290,385,10);
delay(100);
rectangle(310,370,340,340);
delay(100);
rectangle(310,340,340,310);
delay(100);
rectangle(310,280,340,310);
delay(100);
rectangle(280,280,310,310);
delay(100);
rectangle(280,340,310,310);
delay(100);
rectangle(280,340,310,370);
delay(100);
rectangle(370,340,340,370);
delay(100);
rectangle(340,340,370,310);
delay(100);
rectangle(340,280,370,310);
delay(100);
n=n-1;
}
if(n!=0)
{
setcolor(BLUE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(540,230,"START");
rectangle(630,185,530,285);
delay(100);
circle(545,200,10);
delay(100);
rectangle(500,250,530,280);
delay(100);
rectangle(500,250,470,280);
delay(100);
rectangle(470,250,440,280);
delay(100);
rectangle(440,220,470,250);
delay(100);
rectangle(500,220,470,250);
delay(100);
rectangle(500,220,530,250);
delay(100);
rectangle(500,220,530,190);
delay(100);
rectangle(500,220,470,190);
delay(100);
rectangle(440,220,470,190);
delay(100);
n=n-1;
}

if(a!=0)
{
char ch;
int k,flag,x=0;
setcolor(GREEN);
	     k=  roll();
	     if(k==1)
	     {
	     circle(295,355,10);
	     flag=1;
	     x++;
	     }
	     else if(k==2)
	     {
	     circle(295,325,10);
	     flag=0;
	     x++;
	     }

	     if(flag==1)
	     {
	     k=roll();
	       if(k==1)
	       {
	       circle(295,325,10); x++;  k=roll();
		 if(k==1)
		 {
		 circle(295,295,10);   x++; k=roll();
		   if(k==1)
		   {
		   circle(325,295,10); x++;  k=roll();
		     if(k==1)
		     {
		     circle(325,325,10); x++; k= roll();
		       if(k==1)
		       {
		       circle(325,355,10);   x++; k= roll();
			 if(k==1)
			 {
			 circle(355,355,10);    x++;  k=roll();
			   if(k==1)
			   {circle(355,325,10);   x++;  k=roll();
			     if(k==1)
			     {circle(355,295,10);  x++;}
			     else if(k==2)
			     {circle(355,295,10);   x++;}
			   }
			   else if(k==2)
			   {circle(355,295,10);      x++;}
			 }
			 else if(k==2)
			 {
			 circle(355,325,10);         x++; k=roll();
			   if(k==1)
			   {circle(355,295,10);        x++;}
			   else if(k==2)
			   {circle(355,295,10);         x++;}
			 }
		       }
		       else if(k==2)
		       {
		       circle(355,355,10);              x++;  k=roll();
			 if(k==1)
			 {
			 circle(355,325,10);             x++; k=roll();
			   if(k==1)
			   {circle(355,355,10);            x++;}
			   else if(k==2)
			   {circle(355,325,10);             x++;}
			 }
			 else if(k==2)
			 {circle(355,295,10);                x++;}
		       }
		     }
		     else if(k==2)
		     {
		     circle(325,355,10);                     x++; k=roll();
		       if(k==1)
		       {
		       circle(355,355,10);                    x++; k=roll();
			 if(k==1)
			 {
			 circle(355,325,10);                   x++;k=roll();
			   if(k==1)
			   {circle(355,295,10);                  x++;}
			   else if(k==2)
			   {circle(355,295,10);                   x++;}
			 }
			 else if(k==2)
			 {circle(355,295,10);                      x++; }
		       }
		       else if(k==2)
		       {
		       circle(355,325,10);           x++; k=roll();
			 if(k==1)
			 {circle(355,295,10);                        x++;}
			 else if(k==2)
			 {circle(355,295,10);                         x++;}
		       }
		     }
		   }
		   else if(k==2)
		   {
		   circle(325,325,10);              x++; k=roll();
		     if(k==1)
		     {
		     circle(325,355,10);          x++; k=roll();
		       if(k==1)
		       {
		       circle(355,355,10); x++;    k= roll();
			 if(k==1)
			 {
			 circle(355,325,10);x++;          k= roll();
			   if(k==1)
			   {circle(355,295,10);x++;}
			   else if(k==2)
			   {circle(355,295,10); x++;}
			 }
			 else if(k==2)
			 {circle(355,295,10);   x++;}
		       }
		       else if(k==2)
		       {
		       circle(355,325,10); x++;             k= roll();

			 if(k==1)
			 {circle(355,295,10);x++;}
			 else if(k==2)
			 {circle(355,295,10); x ++;}
		       }
		     }
		     else if(k==2)
		     {
		     circle(355,355,10);    x++;                    k=roll();
		       if(k==1)
		       {
		       circle(355,325,10); x++;    k=roll();
		       if(k==1)
		       circle(355,295,10); x++;
		       if(k==2)
		       circle(355,295,10); x++;
		       }
		       else if(k==2)
		       circle(355,295,10); x++;
		     }
		   }
		 }
		 else if(k==2)
		 {
		 circle(325,295,10); k=roll();x++;
		   if(k==1)
		   {
		   circle(325,325,10);  x++;    k=roll();
		     if(k==1)
		     {
		     circle(325,355,10); x++;         k=roll();
		       if(k==1)
		       {
		       circle(355,355,10);x++;           k=roll();
			 if(k==1)
			 {
			 circle(355,325,10); x++;         k=roll();
			   if(k==1)
			   {circle(355,295,10); x++; }
			   else if(k==2)
			   {circle(355,295,10);  x++; }
			 }
			 else if(k==2)
			 {circle(355,295,10);     x++;}
		       }
		       else if(k==2)
		       {
		       circle(355,325,10);        x++;         k=roll();
			 if(k==1)
			 {circle(355,295,10);       x++;}
			 else if(k==2)
			 {circle(355,295,10);        x++;}
		       }
		     }
		     else if(k==2)
		     {
		     circle(355,355,10);   roll();   x++;
		       if(k==1)
		       {
		       circle(355,325,10);  x ++;     k=roll();
			 if(k==1)
			 {circle(355,295,10); x++;}
			 else if(k==2)
			 {circle(355,295,10);  x++;}
		       }
		       else if(k==2)
		       {circle(355,295,10);     x++; }
		     }
		   }
		   else if(k==2)
		   {
		   circle(325,355,10);         x++;          k=roll();
		     if(k==1)
		     {
		     circle(355,355,10); x++;     k=roll();
		       if(k==1)
		       {
		       circle(355,325,10); x++;          k=roll();
			 if(k==1)
			 {circle(355,295,10); x ++;}
			 else if(k==2)
			 {circle(355,295,10) ; x ++;}
		       }
		       else if(k==2)
		       {circle(355,295,10);     x ++;}
		     }
		     else if(k==2)
		     {
		     circle(355,325,10);      x ++;      k=roll();
		       if(k==1)
		       {circle(355,295,10);     x++;}
		       else if(k==2)
		       {circle(355,295,10);      x++;}
		     }
		     else if(k==2)
		     {circle(355,295,10); x++;}
		   }
		 }
	       }
	       else if(k==2)
	       {
	       circle(295,295,10);  x++;   k=roll();
		if(k==1)
		{
		circle(325,295,10); x++;      k=roll();
		  if(k==1)
		  {
		  circle(325,325,10);x++;            k=roll();
		    if(k==1)
		    {
		    circle(325,355,10); x++;         k=roll();
		      if(k==1)
		      {
		      circle(355,355,10);x++;            k=roll();
			if(k==1)
			{
			circle(355,325,10); x++;             k=roll();
			  if(k==1)
			  {circle(355,295,10);x++;}
			  else if(k==2)
			  {circle(355,295,10); x++;}
			}
			else if(k==2)
			{circle(355,295,10);    x++;}
		      }
		      else if(k==2)
		      {
		      circle(355,325,10);       x++;
			if(k==1)
			{circle(355,295,10); x++;}
			else if(k==2)
			{circle(355,295,10); x++;}
		      }
		    }
		    else if(k==2)
		    {
		    circle(355,355,10);x++; k=roll();
		      if(k==1)
		      {
		      circle(355,325,10);x++;    k=roll();
		      if(k==1)
		      {circle(355,295,10); x++;}
		      else if(k==2)
		      {circle(355,295,10);x ++;}
		      }
		      else if(k==2)
		      {circle(355,295,10);x++;}
		    }
		  }
		  else if(k==2)
		  {
		  circle(325,355,10);x++;  k=roll();
		    if(k==1)
		    {
		    circle(355,355,10);x++;    k=roll();
		      if(k==1)
		      {
		      circle(355,325,10);x++;       k=roll();
		      if(k==1)
		      {circle(355,295,10) ; x++;}
		      else if(k==2)
		      {circle(355,295,10); x++;}
		      }
		      else if(k==2)
		      {circle(355,295,10); x++;}
		    }
		    else if(k==2)
		    {
		    circle(355,325,10);x++;   k=roll();
		    if(k==1)
		    {circle(355,295,10);x++;}
		    else if(k==2)
		    {circle(355,295,10);x++;}
		    }
		  }
		}
		else if(k==2)
		{
		circle(325,325,10);x++;  k=roll();
		  if(k==1)
		  {
		  circle(325,355,10);x++;  k=roll();
		    if(k==1)
		    {
		    circle(355,355,10);x++;   k=roll();
		      if(k==1)
		      {
		      circle(355,325,10);x++;   k=roll();
		      if(k==1)
		      {circle(355,295,10);x++;}
		      else if(k==2)
		      {circle(355,295,10);x++;}
		      }
		      else if(k==2)
		      {circle(355,295,10);x ++;}
		    }
		    else if(k==2)
		    {
		    circle(355,325,10);x ++;    k=roll();
		      if(k==1)
		      {circle(355,295,10);x ++;}
		      else if(k==2)
		      {circle(355,295,10); x ++;}
		    }
		  }
		  else if(k==2)
		  {
		  circle(355,355,10); x++;   k=roll();
		    if(k==1)
		    {
		    circle(355,325,10);x++;      k=roll();
		      if(k==1)
		      {circle(355,295,10);x ++;}
		      else if(k==2)
		      {circle(355,295,10); x++;}
		    }
		    else if(k==2)
		    {circle(355,295,10); x ++;}
		  }
		}
	       }
	     }
	     if(flag==0)
	     {
	     k=roll();
	       if(k==1)
	       {
	       circle(295,295,10) ;  x++; k=roll();
		 if(k==1)
		 {
		 circle(325,295,10);  x++; k=roll();
		   if(k==1)
		   {
		   circle(325,325,10);x++; k=roll();
		     if(k==1)
		     {
		     circle(325,355,10); x++;k=roll();
		       if(k==1)
		       {
		       circle(355,355,10); x++;k=roll();
			 if(k==1)
			 {
			 circle(355,325,10); x++;k=roll();
			   if(k==1)
			   {circle(355,295,10); x++;}
			   else if(k==2)
			   {circle(355,295,10);  x++;}
			 }
			 else if(k==2)
			 {circle(355,295,10);x++;}
		       }
		       else if(k==2)
		       {
		       circle(355,325,10); x++; k=roll();
			 if(k==1)
			 {circle(355,295,10);x++;}
			 else if(k==2)
			 {circle(355,295,10);x++;}
		       }
		     }
		     else if(k==2)
		     {
		     circle(355,355,10);x++; k=roll();
		       if(k==1)
		       {
		       circle(355,325,10); x++; k=roll();
			 if(k==1)
			 {circle(355,295,10);x++;}
			 else if(k==2)
			 {circle(355,295,10);x++;}
		       }
		       else if(k==2)
		       {circle(355,295,10);x++;}
		     }
		   }
		   else if(k==2)
		   {
		   circle(325,355,10);x++;k=roll();
		     if(k==1)
		     {
		     circle(355,355,10);x++;k=roll();
		       if(k==1)
		       {
		       circle(355,325,10);x++;k=roll();
		       if(k==1)
		       {circle(355,295,10);  x++; }
		       else if(k==2)
		       {circle(355,295,10);  x++;}
		       }
		       else if(k==2)
		       {circle(355,295,10);x++;}
		     }
		     else if(k==2)
		     {
		     circle(355,325,10);x++; k=roll();
		       if(k==1)
		       {circle(355,295,10); x++;}
		       else if(k==2)
		       {circle(355,295,10); x++;}
		     }
		   }
		 }
		 else if(k==2)
		 {
		 circle(325,325,10);x++; k=roll();
		   if(k==1)
		   {
		   circle(325,355,10); x++; k=roll();
		     if(k==1)
		     {
		     circle(355,355,10); x++;k=roll();
		       if(k==1)
		       {
		       circle(355,325,10); x++;k=roll();
			 if(k==1)
			 {circle(355,295,10);x++;}
			 else if(k==2)
			 {circle(355,295,10);x++;}
		       }
		       else if(k==2)
		       {circle(355,295,10);x++;}
		     }
		     else if(k==2)
		     {
		     circle(355,325,10); x++; k=roll();
		       if(k==1)
		       {circle(355,295,10); x++;}
		       else if(k==2)
		       {circle(355,295,10); x++;}
		     }
		   }
		   else if(k==2)
		   {
		   circle(355,355,10); x++; k=roll();
		     if(k==1)
		     {
		     circle(355,325,10); x++; k=roll();
		       if(k==1)
		       {circle(355,295,10); x++;}
		       else if(k==2)
		       {circle(355,295,10); x++;}
		     }
		     else if (k==2)
		     {circle(355,295,10); x++;}
		   }
		 }
	       }
	       else if(k==2)
	       {
	       circle(325,295,10);x++; k=roll();
		 if(k==1)
		 {
		 circle(325,325,10); x++; k=roll();
		   if(k==1)
		   {
		   circle(325,355,10);  x++; k=roll();
		     if(k==1)
		     {
		     circle(355,355,10);  x++;k=roll();
		       if(k==1)
		       {
		       circle(355,325,10);   x++; k=roll();
		       if(k==1)
		       {circle(355,295,10); x++;}
		       else if(k==2)
		       {circle(355,295,10); x++;}
		       }
		       else if(k==2)
		       {circle(355,295,10); x++;}
		     }
		     else if(k==2)
		     {
		     circle(355,325,10); x++;k=roll();
		       if(k==1)
		       {circle(355,295,10); x++;}
		       else if(k==2)
		       {circle(355,295,10); x++;}
		     }
		   }
		   else if(k==2)
		   {
		   circle(355,355,10); x++; k=roll();
		     if(k==1)
		     {
		     circle(355,325,10);x++; k=roll();
		     if(k==1)
		     {circle(355,295,10); x++;}
		     else if(k==2)
		     {circle(355,295,10);  x++;}
		     }
		     else if(k==2)
		     {circle(355,295,10);  x++;}
		   }
		 }
		 else if(k==2)
		 {
		 circle(325,355,10); x++; k=roll();
		   if(k==1)
		   {
		   circle(355,355,10);  x++; k=roll();
		     if(k==1)
		     {
		     circle(355,325,10);   x++; k=roll();
		     if(k==1)
		     {circle(355,295,10);  x++;}
		     else if(k==2)
		     {circle(355,295,10) ;  x++;}
		     }
		     else if(k==2)
		     {circle(355,295,10); x++;}
		   }
		   else if(k==2)
		   {
		   circle(355,325,10); x++;k=roll();
		     if(k==1)
		     {circle(355,295,10); x++;}
		     else if(k==2)
		     {circle(355,295,10); x++;}
		   }
		 }
	       }
	     }cout<<"NO OF MOVES BY PLAYER A "<< x<< "\n";
a=a-1;
}
if(a!=0)
{
int s=0,v,f;
setcolor(BLUE);
     v=roll();
     if(v==1)
     {
     circle(516,265,10);
     f=1;
     s++;
     }
     else if(v==2)
     {
     circle(486,265,10);
     f=2;
     s++;
     }
     if(f==1)
     {
     v=roll();
       if(v==1)
       {
       circle(486,265,10);
       s++;
       v=roll();
	 if(v==1)
	 {
	 circle(456,265,10);
	 s++;
	 v=roll();
	   if(v==1)
	   {
	   circle(456,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(486,235,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(516,235,10);
	       s++;
	       v=roll();
		 if(v==1)
		 {
		 circle(516,205,10);
		 s++;
		 v=roll();
		   if(v==1)
		   {
		   circle(486,205,10);
		   s++;
		   v=roll();
		     if(v==1)
		     {
		     circle(456,205,10);
		     s++;
		     }
		     else if(v==2)
		     {
		     circle(456,205,10);
		     s++;
		     }
		   }
		   else if(v==2)
		   {
		   circle(456,205,10);
		   s++;
		   }
		 }
		 else if(v==2)
		 {
		 circle(486,205,10);
		 s++;
		 v=roll();
		   if(v==1)
		   {
		   circle(456,205,10);
		   s++;
		   }
		   else if(v==2)
		   {
		   circle(456,205,10);
		   s++;
		   }
		 }
	       }
	       else if(v==2)
	       {
	       circle(516,205,10);
	       s++;
	       v=roll();
		 if(v==1)
		 {
		 circle(486,205,10);
		 s++;
		 v=roll();
		   if(v==1)
		   {
		   circle(456,205,10);
		   s++;
		   }
		   else if(v==2)
		   {
		   circle(456,205,10);
		   s++;
		   }
		 }
		 else if(v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	     }
	     else if(v==2)
	     {
	     circle(516,235,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(516,205,10);
	       s++;
	       v=roll();
		 if(v==1)
		 {
		 circle(486,205,10);
		 s++;
		 v=roll();
		   if(v==1)
		   {
		   circle(456,205,10);
		   s++;
		   }
		   else if(v==2)
		   {
		   circle(456,205,10);
		   s++;
		   }
		 }
		 else if(v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	     }
	   }
	   else if(v==2)
	   {
	   circle(486,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,235,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(516,205,10) ;
	       s++;
	       v=roll();
		 if(v==1)
		 {
		 circle(486,205,10);
		 s++;
		 v=roll();
		   if(v==1||v==2)
		   {
		   circle(456,205,10);
		   s++;
		   }
		 }
		 else if(v==2)
		 {
		 circle(456,205,10) ;
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	     }
	     else if(v==2)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	   }
	 }
	 else if(v==2)
	 {
	 circle(456,235,10);
	 s++;
	 v=roll();
	   if(v==1)
	   {
	   circle(486,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,235,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(516,205,10);
	       s++;
	       v=roll();
		 if(v==1)
		 {
		 circle(486,205,10);
		 s++;
		 v=roll();
		   if(v==1||v==2)
		   {
		   circle(456,205,10);
		   s++;
		   }
		 }
		 else if(v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(486,205,10) ;
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10) ;
		 s++;
		 }
	       }
	     }
	     else if(v==2)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	   }
	   else if (v==2)
	   {
	   circle(516,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	   }
	 }
       }
       else if(v==2)
       {
       circle(456,265,10);
       s++;
       v=roll();
	 if(v==1)
	 {
	 circle(456,235,10);
	 s++;
	 v=roll();
	   if(v==1)
	   {
	   circle(486,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,235,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(516,205,10);
	       s++;
	       v=roll();
		 if(v==1)
		 {
		 circle(486,205,10);
		 s++;
		 v=roll();
		   if(v==1||v==2)
		   {
		   circle(456,205,10);
		   s++;
		   }
		 }
		 else if(v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	     }
	     else if(v==2)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	   }
	   else if(v==2)
	   {
	   circle(516,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	   }
	 }
	 else if(v==2)
	 {
	 circle(486,235,10);
	 s++;
	 v=roll();
	   if(v==1)
	   {
	   circle(516,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	   }
	   else if(v==2)
	   {
	   circle(516,205,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(456,205,10);
	     s++;
	     }
	   }
	 }
       }
     }
     else if (f==2)
     {
     v=roll();
       if(v==1)
       {
       circle(456,265,10);
       s++;
       v=roll();
	 if(v==1)
	 {
	 circle(456,235,10);
	 s++;
	 v=roll();
	   if(v==1)
	   {
	   circle(486,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,235,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(516,205,10);
	       s++;
	       v=roll();
		 if(v==1)
		 {
		 circle(486,205,10);
		 s++;
		 v=roll();
		   if(v==1||v==2)
		   {
		   circle(456,205,10);
		   s++;
		   }
		 }
		 else if(v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==2||v==1)
		 {
		 circle(486,205,10);
		 s++;
		 }
	       }
	     }
	     else if(v==2)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	   }
	   else if(v==2)
	   {
	   circle(516,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(486,205,10);
	       s++;
	       }
	     }
	   }
	 }
	 else if(v==2)
	 {
	 circle(486,235,10);
	 s++;
	 v=roll();
	   if(v==1)
	   {
	   circle(516,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	   }
	   else if(v==2)
	   {
	   circle(516,205,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(456,205,10);
	     s++;
	     }
	   }
	 }
       }
       else if(v==2)
       {
       circle(456,235,10);
       s++;
       v=roll();
	 if(v==1)
	 {
	 circle(486,235,10);
	 s++;
	 v=roll();
	   if(v==1)
	   {
	   circle(516,235,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(516,205,10);
	     s++;
	     v=roll();
	       if(v==1)
	       {
	       circle(486,205,10);
	       s++;
	       v=roll();
		 if(v==1||v==2)
		 {
		 circle(456,205,10);
		 s++;
		 }
	       }
	       else if(v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	   }
	   else if(v==2)
	   {
	   circle(516,205,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(456,205,10);
	     s++;
	     }
	   }
	 }
	 else if(v==2)
	 {
	 circle(516,235,10);
	 s++;
	 v=roll();
	   if(v==1)
	   {
	   circle(516,205,10);
	   s++;
	   v=roll();
	     if(v==1)
	     {
	     circle(486,205,10);
	     s++;
	     v=roll();
	       if(v==1||v==2)
	       {
	       circle(456,205,10);
	       s++;
	       }
	     }
	     else if(v==2)
	     {
	     circle(456,205,10);
	     s++;
	     }
	   }
	   else if(v==2)
	   {
	   circle(486,205,10);
	   s++;
	   v=roll();
	     if(v==1||v==2)
	     {
	     circle(456,205,10);
	     s++;
	     }
	   }
	 }
       }
     }
cout<<"NO OF MOVES BY PLAYER B ="<<s;
}
getch();
}

int roll()
{
char ch;
int a;
cout<<"ENTER";
cin>>ch;
if(ch=='r'||ch=='R')
{
a=rand()%2+1;
}
if(ch=='e'||ch=='E')
exit(0);
return a;
}
