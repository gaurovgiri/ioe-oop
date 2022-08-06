#include<stdio.h> 
#include<graphics.h> 
#include<dos.h> 

  

void printMsg() 
{ 


    int gdriver = DETECT,gmode,i; 

  


    initgraph(&gdriver,&gmode,"C:\\"); 

  

    for (i=3; i<7; i++) 

    { 


        setcolor(3); 

          


        settextstyle(3,0,3); 

          


        outtextxy(100,20*3,"Geeks"); 

          

        delay(500); 
  

    delay(2000); 
} 
