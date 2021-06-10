#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
  int gd=DETECT, gm;
  //initgraph(&gd, &gm,"");
  initwindow(2000,800,"Heli");
  setcolor(WHITE);
  //for(int i=0;i<=)
  line(100,700,460,700); //straight horizontal line
  line(100,700,60,630);  //leftmost slanted line
  line(60,630,80,630);    //tail horizontal line
  line(80,630,120,660);    //right slanted line
  line(120,660,260,630);   //middle slanted line
  arc(340,630,120,180,80);  //left arc
  arc(380,630,0,60,80);      //right arc
  line(460,700,460,630);      //rightmost vertical line 
  line(460,630,418,630);      //horizontal line for window 
  line(418,630,418,560);      //vertical line for window
  line(418,560,301,560);      //middle horizontal line
  //footstand
  line(400,700,400,725);     
  line(410,700,410,725);
  line(300,700,300,725);
  line(290,700,290,725);
  line(265,725,435,725);
  line(265,737,435,737);
  line(265,725,265,737);
  line(435,725,435,737);
  //door
  rectangle(320,600,390,690);
  circle(380,645,4);
  //upper part of heli
  line(310,540,408,540);
  line(310,536,408,536);
  line(310,536,310,540);
  line(408,536,408,540);
  line(301,560,310,540);
  line(408,540,418,560);
  line(353,536,353,526);
  line(365,536,365,526);
  line(353,526,365,526);
  //fan
  line(359,526,259,534);
  line(359,526,459,534);
  line(359,526,269,544);
  line(359,526,449,544);
  line(359,526,269,520);
  line(359,526,449,520);
  line(359,526,289,554);
  line(359,526,439,554);
  
  
  
  
  getch();
}

