#include<graphics.h>

void mainWindow(){
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "");
    setcolor(LIGHTGREEN);
    settextstyle(4,0,18);
    outtextxy(120,50,"Welcome!");
    setcolor(WHITE);
    settextstyle(4,0,2);
    outtextxy(50,150,"There will be back to back 5 questions");
    outtextxy(50,175,"in the quiz. You will have only one single");
    outtextxy(50,200,"chance to attempt quiz. One mistake and");
    outtextxy(50,225,"the game is over..");
    setcolor(YELLOW);
    settextstyle(4,0,12);
    outtextxy(50,300,"$$  PRESS ANY KEY TO START THE QUIZ  $$");
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    rectangle(450,390,638,478);
    floodfill(451,391,WHITE);
    settextstyle(4,0,1);
    setcolor(WHITE);
    setbkcolor(RED);
    outtextxy(455,395,"Designed By:");
    line(450,425,638,425);
    settextstyle(7,0,5);
    outtextxy(451,430," Kshitiz");
    getch();
    closegraph();
}

void gameOver(){
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "");
    setcolor(LIGHTGREEN);
    settextstyle(4,0,18);
    outtextxy(20,30,"BETTER LUCK");
    outtextxy(50,100,"NEXT TIME!");
    setcolor(LIGHTCYAN);
    outtextxy(70,200,"GAME OVER");
    line(70,260,560,260);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    rectangle(450,390,638,478);
    floodfill(451,391,WHITE);
    settextstyle(4,0,1);
    setcolor(WHITE);
    setbkcolor(RED);
    outtextxy(455,395,"Designed By:");
    line(450,425,638,425);
    settextstyle(7,0,5);
    outtextxy(451,430," Kshitiz");
    setcolor(YELLOW);
    setbkcolor(BLACK);
    settextstyle(4,0,12);
    outtextxy(120,300,"$$  PRESS ANY KEY TO EXIT  $$");
    getch();
    closegraph();
}

void gameWon(){
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "");
    setcolor(LIGHTGREEN);
    settextstyle(4,0,18);
    outtextxy(20,50,"Congratulations!");
    setcolor(LIGHTCYAN);
    outtextxy(120,200,"YOU WON");
    line(120,260,550,260);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    rectangle(450,390,638,478);
    floodfill(451,391,WHITE);
    settextstyle(4,0,1);
    setcolor(WHITE);
    setbkcolor(RED);
    outtextxy(455,395,"Designed By:");
    line(450,425,638,425);
    settextstyle(7,0,5);
    outtextxy(451,430," Kshitiz");
    setcolor(YELLOW);
    setbkcolor(BLACK);
    settextstyle(4,0,12);
    outtextxy(120,300,"$$  PRESS ANY KEY TO EXIT  $$");
    getch();
    closegraph();
}

int fifthQuestion(){
    int answer;
    int gd = DETECT, gm,points[]={550,50,600,200,350,200,300,50,550,50};
    initgraph(&gd,&gm, "");
    settextstyle(4,0,1);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(25,25,15);
    floodfill(25,25,WHITE);
    setcolor(BLACK);
    setbkcolor(LIGHTGREEN);
    outtextxy(17,17,"5");
    setbkcolor(BLACK);
    setcolor(WHITE);
    settextstyle(0,0,0);
    outtextxy(50,70,"The figure besides is a");
    outtextxy(50,100,"parallelogram with two");
    outtextxy(50,130,"angles given in terms of");
    outtextxy(50,160,"x. Determine the value of x.");
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    drawpoly(5, points);
    floodfill(500,70,WHITE);
    setbkcolor(LIGHTBLUE);
    line(530,50,555,70);
    outtextxy(450,70,"(4x + 12)");
    line(580,200,594,180);
    outtextxy(480,170,"(3x + 14)");
    setbkcolor(BLACK);
    setcolor(LIGHTRED);
    outtextxy(50,275,"(a)");
    outtextxy(200,275,"(b)");
    outtextxy(350,275,"(c)");
    outtextxy(500,275,"(d)");
    setcolor(CYAN);
    outtextxy(80,275,"9");
    outtextxy(230,275,"10");
    outtextxy(380,275,"20");
    outtextxy(530,275,"22");
    setcolor(YELLOW);
    settextstyle(4,0,2);
    outtextxy(150,330,"PRESS YOUR OPTION");
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    rectangle(450,390,638,478);
    floodfill(451,391,WHITE);
    settextstyle(4,0,1);
    setcolor(WHITE);
    setbkcolor(RED);
    outtextxy(455,395,"Designed By:");
    line(450,425,638,425);
    settextstyle(7,0,5);
    outtextxy(451,430," Kshitiz");
    setfillstyle(SOLID_FILL,CYAN);
    rectangle(2,390,185,478);
    floodfill(5,395,WHITE);
    setbkcolor(CYAN);
    settextstyle(4,0,1);
    line(120,390,120,478);
    outtextxy(5,425,"SCORE");
    outtextxy(140,425,"4");
    answer = getch();
    closegraph();
    return answer;
}

int fourthQuestion(){
    int answer;
    int gd = DETECT, gm,points[]={550,25,600,125,550,225,400,225,350,125,400,25,550,25};
    initgraph(&gd,&gm, "");
    settextstyle(4,0,1);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(25,25,15);
    floodfill(25,25,WHITE);
    setcolor(BLACK);
    setbkcolor(LIGHTGREEN);
    outtextxy(17,17,"4");
    setbkcolor(BLACK);
    setcolor(WHITE);
    settextstyle(0,0,0);
    outtextxy(50,70,"What is the sum of the");
    outtextxy(50,100,"measures of the interior");
    outtextxy(50,130,"angles of a hexagon in");
    outtextxy(50,160,"degrees ?");
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    drawpoly(7, points);
    floodfill(500,150,WHITE);
    setcolor(LIGHTRED);
    outtextxy(50,275,"(a)");
    outtextxy(200,275,"(b)");
    outtextxy(350,275,"(c)");
    outtextxy(500,275,"(d)");
    setcolor(CYAN);
    outtextxy(80,275,"720");
    outtextxy(230,275,"540");
    outtextxy(380,275,"810");
    outtextxy(530,275,"1080");
    setcolor(YELLOW);
    settextstyle(4,0,2);
    outtextxy(150,330,"PRESS YOUR OPTION");
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    rectangle(450,390,638,478);
    floodfill(451,391,WHITE);
    settextstyle(4,0,1);
    setcolor(WHITE);
    setbkcolor(RED);
    outtextxy(455,395,"Designed By:");
    line(450,425,638,425);
    settextstyle(7,0,5);
    outtextxy(451,430," Kshitiz");
    setfillstyle(SOLID_FILL,CYAN);
    rectangle(2,390,185,478);
    floodfill(5,395,WHITE);
    setbkcolor(CYAN);
    settextstyle(4,0,1);
    line(120,390,120,478);
    outtextxy(5,425,"SCORE");
    outtextxy(140,425,"3");
    answer = getch();
    closegraph();
    return answer;
}

int thirdQuestion(){
    int answer;
    int gd = DETECT, gm, points[]={600,50,600,180,550,180,550,100,400,100,400,50,600,50};
    initgraph(&gd,&gm, "");
    settextstyle(4,0,1);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(25,25,15);
    floodfill(25,25,WHITE);
    setcolor(BLACK);
    setbkcolor(LIGHTGREEN);
    outtextxy(17,17,"3");
    setbkcolor(BLACK);
    setcolor(WHITE);
    settextstyle(0,0,0);
    outtextxy(50,70,"The figure besides contains");
    outtextxy(50,100,"only horizontal and vertical");
    outtextxy(50,130,"lines. Calculate its");
    outtextxy(50,160,"perimeter.");
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    drawpoly(7,points);
    floodfill(598,100,WHITE);
    outtextxy(380,70,"3");
    outtextxy(480,30,"12");
    outtextxy(570,190,"3");
    outtextxy(610,110,"9");
    setcolor(LIGHTRED);
    outtextxy(50,275,"(a)");
    outtextxy(200,275,"(b)");
    outtextxy(350,275,"(c)");
    outtextxy(500,275,"(d)");
    setcolor(CYAN);
    outtextxy(80,275,"27");
    outtextxy(230,275,"33");
    outtextxy(380,275,"36");
    outtextxy(530,275,"42");
    setcolor(YELLOW);
    settextstyle(4,0,2);
    outtextxy(150,330,"PRESS YOUR OPTION");
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    rectangle(450,390,638,478);
    floodfill(451,391,WHITE);
    settextstyle(4,0,1);
    setcolor(WHITE);
    setbkcolor(RED);
    outtextxy(455,395,"Designed By:");
    line(450,425,638,425);
    settextstyle(7,0,5);
    outtextxy(451,430," Kshitiz");
    setfillstyle(SOLID_FILL,CYAN);
    rectangle(2,390,185,478);
    floodfill(5,395,WHITE);
    setbkcolor(CYAN);
    settextstyle(4,0,1);
    line(120,390,120,478);
    outtextxy(5,425,"SCORE");
    outtextxy(140,425,"2");
    answer = getch();
    closegraph();
    return answer;
}

int secondQuestion(){
    int answer;
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "");
    settextstyle(4,0,1);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(25,25,15);
    floodfill(25,25,WHITE);
    setcolor(BLACK);
    setbkcolor(LIGHTGREEN);
    outtextxy(17,17,"2");
    setbkcolor(BLACK);
    setcolor(WHITE);
    settextstyle(0,0,0);
    outtextxy(50,70,"What is the area of a circle");
    outtextxy(50,100,"with a diameter of 16?");
    outtextxy(50,130,"Options are mentioned as the");
    outtextxy(50,160,"factors of pi.");
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    circle(500,120,75);
    floodfill(500,100,WHITE);
    line(425,120,575,120);
    setbkcolor(LIGHTBLUE);
    outtextxy(490,100,"16");
    setbkcolor(BLACK);
    setcolor(LIGHTRED);
    outtextxy(50,275,"(a)");
    outtextxy(200,275,"(b)");
    outtextxy(350,275,"(c)");
    outtextxy(500,275,"(d)");
    setcolor(CYAN);
    outtextxy(80,275,"8");
    outtextxy(230,275,"64");
    outtextxy(380,275,"128");
    outtextxy(530,275,"16");
    setcolor(YELLOW);
    settextstyle(4,0,2);
    outtextxy(150,330,"PRESS YOUR OPTION");
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    rectangle(450,390,638,478);
    floodfill(451,391,WHITE);
    settextstyle(4,0,1);
    setcolor(WHITE);
    setbkcolor(RED);
    outtextxy(455,395,"Designed By:");
    line(450,425,638,425);
    settextstyle(7,0,5);
    outtextxy(451,430," Kshitiz");
    setfillstyle(SOLID_FILL,CYAN);
    rectangle(2,390,185,478);
    floodfill(5,395,WHITE);
    setbkcolor(CYAN);
    settextstyle(4,0,1);
    line(120,390,120,478);
    outtextxy(5,425,"SCORE");
    outtextxy(140,425,"1");
    answer = getch();
    closegraph();
    return answer;
}

int firstQuestion(){
    int answer;
    int gd = DETECT, gm,points[]={425,50,500,200,425,200,425,50};
    initgraph(&gd,&gm, "");
    settextstyle(4,0,1);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(25,25,15);
    floodfill(25,25,WHITE);
    setcolor(BLACK);
    setbkcolor(LIGHTGREEN);
    outtextxy(17,17,"1");
    setbkcolor(BLACK);
    setcolor(WHITE);
    settextstyle(0,0,0);
    outtextxy(50,70,"In a 30-60-90 triangle, the");
    outtextxy(50,100,"length of the hypotenuse is 6.");
    outtextxy(50,130,"What is the length of the");
    outtextxy(50,160,"shortest side?");
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    drawpoly(4, points);
    floodfill(450,190,WHITE);
    line(425,190,435,190);
    line(435,190,435,200);
    outtextxy(475,120,"6");
    outtextxy(455,210,"?");
    setcolor(LIGHTRED);
    outtextxy(50,275,"(a)");
    outtextxy(200,275,"(b)");
    outtextxy(350,275,"(c)");
    outtextxy(500,275,"(d)");
    setcolor(CYAN);
    outtextxy(80,275,"4.1");
    outtextxy(230,275,"3.2");
    outtextxy(380,275,"3.0");
    outtextxy(530,275,"4.8");
    setcolor(YELLOW);
    settextstyle(4,0,2);
    outtextxy(150,330,"PRESS YOUR OPTION");
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    rectangle(450,390,638,478);
    floodfill(451,391,WHITE);
    settextstyle(4,0,1);
    setcolor(WHITE);
    setbkcolor(RED);
    outtextxy(455,395,"Designed By:");
    line(450,425,638,425);
    settextstyle(7,0,5);
    outtextxy(451,430," Kshitiz");
    setfillstyle(SOLID_FILL,CYAN);
    rectangle(2,390,185,478);
    floodfill(5,395,WHITE);
    setbkcolor(CYAN);
    settextstyle(4,0,1);
    line(120,390,120,478);
    outtextxy(5,425,"SCORE");
    outtextxy(140,425,"0");
    answer = getch();
    closegraph();
    return answer;
}

main(){
    int a1 = 0,a2 = 0,a3 = 0,a4 = 0,a5 = 0;
    mainWindow();
    a1 = firstQuestion();
    if(a1 == 67 || a1 == 99){
        a2 = secondQuestion();
        if(a2 == 66 || a2 == 98){
            a3 = thirdQuestion();
            if(a3 == 68 || a3 == 100){
                a4 = fourthQuestion();
                if(a4 == 65 || a4 == 97){
                    a5 = fifthQuestion();
                    if(a5 == 68 || a5 == 100)
                        gameWon();
                    else
                        gameOver();
                }
                else
                    gameOver();
            }
            else
                gameOver();
        }
        else
            gameOver();
    }
    else
        gameOver();
}
