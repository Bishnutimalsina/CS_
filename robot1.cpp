/*
__________  .__           .__                           ___________ .__                     .__             .__                   
\______   \ |__|   ______ |  |__     ____    __ __      \__    ___/ |__|   _____   _____    |  |     ______ |__|   ____   _____   
 |    |  _/ |  |  /  ___/ |  |  \   /    \  |  |  \       |    |    |  |  /     \  \__  \   |  |    /  ___/ |  |  /    \  \__  \  
 |    |   \ |  |  \___ \  |   Y  \ |   |  \ |  |  /       |    |    |  | |  Y Y  \  / __ \_ |  |__  \___ \  |  | |   |  \  / __ \_
 |______  / |__| /____  > |___|  / |___|  / |____/        |____|    |__| |__|_|  / (____  / |____/ /____  > |__| |___|  / (____  /
        \/            \/       \/       \/                                     \/       \/              \/            \/       \/ 

  https://bishnutimalsina1.github.io/portfolio/
  tima9387@vandals.uidaho.edu
  >> Bishnu Timalsina
  >> CS120 SECTION 06
  >> 03/28/2018                                                                                                                             
*/
    #include <curses.h>  
    #include <ncurses.h>  // include the curses library
    #include <iostream>

using namespace std;

const int MAXX = 40; // maximum size of the 'room'
const int MAXY = 20;

void setup(char[][MAXY], int x, int y); // room setup
void print(char [][MAXY], int, int );

int main() {
        char c;
        WINDOW* wnd;
        char room[MAXX][MAXY]; // stores the room
        int x = MAXX/2, y = MAXY/2; // robot.s initial location


        wnd = initscr(); // use curses to initialize the window
        clear(); // use curses to clear the window
        refresh(); // use curses to reprint the window


        setup(room,x,y); // setup the room with the robot
        print(room,x,y); // write this function!!



        while ((c = getch()) != 'q') // will pause until user presses 'q'
           ;                     // on the keyboard

        endwin();       // frees the screen for normal use
}

/* Sets up the room, adding walls, and the robot */
void setup(char r[][MAXY], int x, int y)
{
     for(int i = 0; i < MAXX; i++){
         for(int j = 0; j < MAXY; j++)
         {
                r[i][j] = ' '; // empty the room

         }
     }

     for(int i = 0; i < MAXY; i++){
        r[0][i] = '|'; // left wall
        r[MAXX-1][i] = '|'; // right wall
     }

     for(int i = 0; i < MAXX; i++) {
        r[i][0] = '-'; // top wall
        r[i][MAXY-1] = '-'; // bottom wall
     }

     r[x][y] = 'R'; // place the robot
}


void print(char r[][MAXY], int x, int y)
{
        for(int i = 0; i < MAXX; i++){
                for(int j = 0; j < MAXY; j++){
                        move(j,i);
                        insch(r[i][j]);
                }
        }
}
