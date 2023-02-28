#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>
int main()

{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,(char*)"");
	int height=GetSystemMetrics(SM_CYSCREEN);
	int width=GetSystemMetrics(SM_CYSCREEN);
	initwindow(width+1400,height,"STICKMAN LANDING");
line(0,710,1800,710);
line(0,640,1800,640);
i=0;

	while(i<1900)
	{

        i=i+5;

        setcolor(15);



if(i<50)
{
//outer line of plane

    line(100+i,500,400+i,500);
    line(100+i,600,400+i,600);
    //front triangle
    line(400+i,500,500+i,550);
        line(400+i,600,500+i,550);
       // last line code
        line(100+i,500,100+i,600);
       //last triangle or back triangle
       line(100+i,430,190+i,550);
        line(100+i,430,110+i,550);
        line(110+i,550,190+i,550);
            //up wings
          line(300+i,500,225+i,450);
          line(250+i,500,225+i,450);
              //down wings
            line(300+i,600,225+i,650);
            line(250+i,600,225+i,650);
}
else{
        //outer of plane
          line(100+i,500-i/2,400+i,500-i/2);
    line(100+i,600-i/2,400+i,600-i/2);
    //front triangle
    line(400+i,500-i/2,500+i,550-i/2);
        line(400+i,600-i/2,500+i,550-i/2);
       // last line code
        line(100+i,500-i/2,100+i,600-i/2);
       //last triangle or back triangle
       line(100+i,430-i/2,190+i,550-i/2);
        line(100+i,430-i/2,110+i,550-i/2);
        line(110+i,550-i/2,190+i,550-i/2);
            //up wings
          line(300+i,500-i/2,225+i,450-i/2);
          line(250+i,500-i/2,225+i,450-i/2);
              //down wings
            line(300+i,600-i/2,225+i,650-i/2);
            line(250+i,600-i/2,225+i,650-i/2);
}

         //for man with parachute

       if(i>800)
        {

     //head
        circle(1100,200+4*i/25,20);
        //body line
        line(1100,220+4*i/25,1100,270+4*i/25);
        //hands
        line(1100,235+4*i/25,1075,225+4*i/25);
        line(1100,235+4*i/25,1075,225+4*i/25);
       line(1100,235+4*i/25,1125,225+4*i/25);//right hand
         //parachute with rope
        //arc(1100,175+4*i/25,0,180,40);
        line(1140,175+4*i/25,1125,225+4*i/25);
        line(1060,175+4*i/25,1075,225+4*i/25);
        //leg code
        line(1100,270+4*i/25,1125,280+4*i/25);
             line(1100,270+4*i/25,1075,280+4*i/25);
        }
        if(i>1200){
               line(1062,175+4*i/25,1040,145+4*i/25);//left rope
               line(1138,175+4*i/25,1160,145+4*i/25);//right rope
             arc(1100,145+4*i/25,0,180,60);
        }

        //landing man
         if(i==1900)            {
          circle(1100,555,20);//head after landing
           line(1100,575,1100,625);//bone after landing
           //legs
            line(1100,625,1125,650);
             line(1100,625,1075,650);
             //hand
               line(1100,590,1075,600);
                   line(1100,590,1125,600);
        }
			setcolor(0);

		delay(50);



if(i<50)
{
    //

    line(100+i,500,400+i,500);
    line(100+i,600,400+i,600);
    //front triangle
    line(400+i,500,500+i,550);
        line(400+i,600,500+i,550);
       // last line code
        line(100+i,500,100+i,600);
       //last triangle or back triangle
       line(100+i,430,190+i,550);
        line(100+i,430,110+i,550);
        line(110+i,550,190+i,550);
            //up wings
          line(300+i,500,225+i,450);
          line(250+i,500,225+i,450);
              //down wings
            line(300+i,600,225+i,650);
            line(250+i,600,225+i,650);
}
else{
      line(100+i,500-i/2,400+i,500-i/2);
    line(100+i,600-i/2,400+i,600-i/2);
    //front triangle
    line(400+i,500-i/2,500+i,550-i/2);
        line(400+i,600-i/2,500+i,550-i/2);
       // last line code
        line(100+i,500-i/2,100+i,600-i/2);
       //last triangle or back triangle
       line(100+i,430-i/2,190+i,550-i/2);
        line(100+i,430-i/2,110+i,550-i/2);
        line(110+i,550-i/2,190+i,550-i/2);
            //up wings
          line(300+i,500-i/2,225+i,450-i/2);
          line(250+i,500-i/2,225+i,450-i/2);
              //down wings
            line(300+i,600-i/2,225+i,650-i/2);
            line(250+i,600-i/2,225+i,650-i/2);
}
     if(i>800)
        {
//            man with parachute

//head
        circle(1100,200+4*i/25,20);
        //body line
        line(1100,220+4*i/25,1100,270+4*i/25);
        //hands
        line(1100,235+4*i/25,1075,225+4*i/25);
       // line(1100,235+4*i/25,1075,225+4*i/25);
       line(1100,235+4*i/25,1125,225+4*i/25);//right hand
         //parachute with rope
        //arc(1100,155+4*i/25,0,180,60);
        line(1140,175+4*i/25,1125,225+4*i/25);
        line(1060,175+4*i/25,1075,225+4*i/25);
        //leg code
        line(1100,270+4*i/25,1125,280+4*i/25);
             line(1100,270+4*i/25,1075,280+4*i/25);

        }
        if(i>1200){
                line(1062,175+4*i/25,1040,145+4*i/25);//left rope
               line(1138,175+4*i/25,1160,145+4*i/25);//right rope
             arc(1100,145+4*i/25,0,180,60);
        }
}
		getch();
	closegraph();

}
